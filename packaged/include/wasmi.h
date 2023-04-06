/*! \file */
/*******************************************
 *                                         *
 *  File auto-generated by `::safer_ffi`.  *
 *                                         *
 *  Do not manually edit this file.        *
 *                                         *
 *******************************************/

#ifndef __RUST_WASMI_C_API_CRATE__
#define __RUST_WASMI_C_API_CRATE__

#ifdef __cplusplus
extern "C" {
#endif


#include <stddef.h>
#include <stdint.h>

/** \brief
 *  Same as [`Vec<T>`][`rust::Vec`], but with guaranteed `#[repr(C)]` layout
 */
typedef struct Vec_uint8 {

    uint8_t * ptr;

    size_t len;

    size_t cap;

} Vec_uint8_t;

Vec_uint8_t execute_wasm_binary_to_json (
    uint8_t * wasm_binary,
    size_t wasm_binary_length);

int32_t create_wasm_engine (void);


#include <stdbool.h>

bool set_wasm_binary (
    int32_t engine_id,
    uint8_t * wasm_binary,
    size_t wasm_binary_length);

Vec_uint8_t compute_trace (
    int32_t engine_id);

Vec_uint8_t memory_data (
    int32_t engine_id);

bool register_host_fn_p1_ret0 (
    int32_t engine_id,
    int8_t const * host_fn_name_ptr,
    void (*host_fn)(int32_t, int32_t));

bool register_host_fn_p2_ret0 (
    int32_t engine_id,
    int8_t const * host_fn_name_ptr,
    void (*host_fn)(int32_t, int32_t, int32_t));


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __RUST_WASMI_C_API_CRATE__ */
