#ifndef TVMGEN_DEFAULT_H_
#define TVMGEN_DEFAULT_H_
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/*!
 * \brief Input tensor serving_default_input_1_0 size (in bytes) for TVM module "default" 
 */
#define TVMGEN_DEFAULT_SERVING_DEFAULT_INPUT_1_0_SIZE 49152
/*!
 * \brief Output tensor StatefulPartitionedCall_0 size (in bytes) for TVM module "default" 
 */
#define TVMGEN_DEFAULT_STATEFULPARTITIONEDCALL_0_SIZE 40
/*!
 * \brief Output tensor StatefulPartitionedCall_2 size (in bytes) for TVM module "default" 
 */
#define TVMGEN_DEFAULT_STATEFULPARTITIONEDCALL_2_SIZE 40
/*!
 * \brief Output tensor StatefulPartitionedCall_1 size (in bytes) for TVM module "default" 
 */
#define TVMGEN_DEFAULT_STATEFULPARTITIONEDCALL_1_SIZE 40
/*!
 * \brief Input tensor pointers for TVM module "default" 
 */
struct tvmgen_default_inputs {
  void* serving_default_input_1_0;
};

/*!
 * \brief Output tensor pointers for TVM module "default" 
 */
struct tvmgen_default_outputs {
  void* StatefulPartitionedCall_1;
  void* StatefulPartitionedCall_2;
  void* StatefulPartitionedCall_0;
};

/*!
 * \brief entrypoint function for TVM module "default"
 * \param inputs Input tensors for the module 
 * \param outputs Output tensors for the module 
 */
int32_t tvmgen_default_run(
  struct tvmgen_default_inputs* inputs,
  struct tvmgen_default_outputs* outputs
);
/*!
 * \brief Workspace size for TVM module "default" 
 */
#define TVMGEN_DEFAULT_WORKSPACE_SIZE 55328

#ifdef __cplusplus
}
#endif

#endif // TVMGEN_DEFAULT_H_
