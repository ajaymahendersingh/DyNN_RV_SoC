```markdown
# AHB-Lite UART IP Core (Encrypted RTL)

This repository contains the encrypted Verilog RTL files (`.vp`) for an AHB-Lite UART IP core featuring internal FIFO buffering. This repository is provided for verification and evaluation purposes in association with our paper submission.

## ⚠️ Tool Compatibility & Requirements

* **Encryption Tool:** AMD Vivado 2024.2 (IEEE 1735)
* **Compatibility:** **Forward-compatible only.** This core will synthesize and simulate successfully in Vivado 2024.2 or newer. It is **not** backward-compatible and will fail to decrypt in Vivado 2023.2 or earlier versions.
* **Supported Simulator:** Vivado XSIM (Native support).

---

## 💻 Black-Box Instantiation Stubs

Since the source code is encrypted, treat these modules as black boxes. Use the templates below to instantiate them into your top-level system design.

### 1. AHB-Lite UART Top-Level (`AHBuart.vp`)
```verilog
AHBuart #(
    .CLK_FREQ(100_000_000),  // System clock frequency in Hz
    .BAUD_RATE(2_000_000)    // Default baud rate
) u_AHBuart (
    .HCLK(HCLK),
    .HRESETn(HRESETn),         
    .HSEL(HSEL),            
    .HREADY(HREADY),          
    .HADDR(HADDR),    
    .HTRANS(HTRANS),
    .HWRITE(HWRITE),          
    .HWDATA(HWDATA),   
    .HRDATA(HRDATA),   
    .HREADYOUT(HREADYOUT),       
    .HRESP(HRESP),           
    .serialRx(serialRx),         
    .serialTx(serialTx),        
    .uart_IRQ(uart_IRQ),        
    .rxnew_LED(rxnew_LED),
    .txgo_LED(txgo_LED)
);
