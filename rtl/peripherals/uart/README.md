# AHB-Lite UART IP Core (Encrypted RTL)

This folder contains the encrypted Verilog RTL files (`.vp`) for an AHB-Lite UART IP core.

## Tool Compatibility & Requirements

* **Encryption Tool:** AMD Vivado 2024.2 (IEEE 1735 v2)
* **Compatibility:** **Forward-compatible only.** This core will synthesize and simulate successfully in Vivado 2024.2 or newer. It is **not** backward-compatible and will fail to decrypt in earlier versions (claim validated on vivado 2023.2).
---

## Black-Box Instantiation Stubs

Since the source code is encrypted, treat these modules as black boxes. Use the templates below to instantiate them into your top-level design.

### 1. `AHBuart.vp`
```verilog
module AHBuart #(
    parameter CLK_FREQ  = 100_000_000,    // system clock frequency in Hz
    parameter BAUD_RATE = 2000000         // default baud rate
)(
            input  HCLK,
            input  HRESETn,         
            input  HSEL,            
            input  HREADY,          
            input  [31:0] HADDR,    
            input  [1:0] HTRANS,
            input  HWRITE,          
            input  [31:0] HWDATA,   
            output [31:0] HRDATA,   
            output HREADYOUT,       
            output HRESP,           
            input serialRx,         
            output serialTx,        
            output uart_IRQ,        
            output reg rxnew_LED,
            output reg txgo_LED
    );
---
### 2. `uart.vp`
```verilog
module uart #(
    parameter CLK_FREQ  = 100_000_000,  // system clock frequency in Hz
    parameter BAUD_RATE = 230400        // desired baud rate
)(
    input clk,                  // main clock, drives all logic
    input rst,                  // asynchronous reset
    input [7:0] txdin,          // 8-bit data to be transmitted
    input txgo,                 // indicates new data to send, ignored if not ready
    output reg txd,             // serial data out (idle at logic 1, high)
    output txrdy,               // transmitter ready for new data
    input rxd,                  // serial data in (idle at logic 1, high)
    output reg [7:0] rxdout,    // 8-bit received data
    output rxnew                // indicates new data available, asserted for 1 clock
);

### 3. `fifo.vp`
```verilog
module FIFO #(parameter DWIDTH=8, AWIDTH=1)
(
  input wire clk,
  input wire resetn,		        // active-low reset
  input wire rd,			        // read means that byte is being taken from fifo output
  input wire wr,			        // write means that byte should be written to fifo input 
  input wire [DWIDTH-1:0] w_data,	// fifo data in
  
  output wire empty,		        // no bytes in queue - output data is rubbish
  output wire full,		            // no space in queue - write requests will be ignored
  output wire [DWIDTH-1:0] r_data	// fifo data out
);
