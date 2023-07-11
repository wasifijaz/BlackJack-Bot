/* Generated code for Python module 'cryptography.hazmat.bindings.openssl._conditional'
 * created by Nuitka version 1.5.8
 *
 * This code is in part copyright 2022 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_cryptography$hazmat$bindings$openssl$_conditional" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$bindings$openssl$_conditional;
PyDictObject *moduledict_cryptography$hazmat$bindings$openssl$_conditional;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[139];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[139];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("cryptography.hazmat.bindings.openssl._conditional"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 139; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$bindings$openssl$_conditional(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 139; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_37990b4b27b13efdc11edb5d27d9741a;
static PyCodeObject *codeobj_6f8b0a8d6f537e40573e1f597dc8cb18;
static PyCodeObject *codeobj_1829f7e156b6b36c140903a59fe1794d;
static PyCodeObject *codeobj_889f038a13100b4aa580a1dab7b9d8b1;
static PyCodeObject *codeobj_0148c397022124332b869ce98555ee39;
static PyCodeObject *codeobj_b9cd63e48cb515779158a883841a94d3;
static PyCodeObject *codeobj_14d28e112ab0df7769147506db4bd46f;
static PyCodeObject *codeobj_69b07ba9739a1dc6074dd503078f6a27;
static PyCodeObject *codeobj_1f26e48b43e324fd6a20eb64d1daa0c2;
static PyCodeObject *codeobj_ca043f9e2b4c3991b74460fde82240be;
static PyCodeObject *codeobj_c6265cc316f31304396252eaa5f0b954;
static PyCodeObject *codeobj_b0147fb5c7cbdff2ca12eeffcf82d90d;
static PyCodeObject *codeobj_557a9b0208cd19cf0bbbb0073a2e7984;
static PyCodeObject *codeobj_f98b6a93b91f4aeffb0518f49c4638c5;
static PyCodeObject *codeobj_f59af9c3c6c2bdc92121f7d872e26ef7;
static PyCodeObject *codeobj_1dc072ff87f17910e441377c8f349cc9;
static PyCodeObject *codeobj_2d2a68f94895ba4744178b72385175c9;
static PyCodeObject *codeobj_8bea8f1d40ae0b51a6e70a045c41e93e;
static PyCodeObject *codeobj_46444994e79169955ec06bae53adcffa;
static PyCodeObject *codeobj_fa3260519064e56c933c1ace09595fe6;
static PyCodeObject *codeobj_f7a9e73406e2596dbce17e866377612c;
static PyCodeObject *codeobj_cf4409ea747fe9b4c09ccf8146715b9e;
static PyCodeObject *codeobj_b42ccd21e24b87a50128eec2126ac738;
static PyCodeObject *codeobj_f5d467fac28e72955194c07d442c0719;
static PyCodeObject *codeobj_b49bbe4e79789944154d85e4957e4183;
static PyCodeObject *codeobj_e10b4971fb69fc6702f1e3ecea5f9f54;
static PyCodeObject *codeobj_7d541816dd23794a3e18f6d8c43ddf63;
static PyCodeObject *codeobj_b26ccafaebff66785f51d0d036a75534;
static PyCodeObject *codeobj_864a3db9febaf559dd9a284b5507c32e;
static PyCodeObject *codeobj_4628b6d4cdc30015aaf54ecf41be2ad0;
static PyCodeObject *codeobj_a0d20be547245836d8785e652a3027ca;
static PyCodeObject *codeobj_0243199e610a31a0bcbe380033d765a0;
static PyCodeObject *codeobj_028a949aeef3f20f48dd984fbdeb1e02;
static PyCodeObject *codeobj_2f320c982ef46017083b823fa3fddcd2;
static PyCodeObject *codeobj_683b015978633bfd6b4903d3cf7f89be;
static PyCodeObject *codeobj_94ca14100b218c235ce99cd99f3636b1;
static PyCodeObject *codeobj_f8310ddfc4dcad32f5bb953c0a156d5e;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[136]); CHECK_OBJECT(module_filename_obj);
    codeobj_37990b4b27b13efdc11edb5d27d9741a = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[137], mod_consts[137], NULL, NULL, 0, 0, 0);
    codeobj_6f8b0a8d6f537e40573e1f597dc8cb18 = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[93], mod_consts[93], NULL, NULL, 0, 0, 0);
    codeobj_1829f7e156b6b36c140903a59fe1794d = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[88], mod_consts[88], NULL, NULL, 0, 0, 0);
    codeobj_889f038a13100b4aa580a1dab7b9d8b1 = MAKE_CODE_OBJECT(module_filename_obj, 238, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[91], mod_consts[91], NULL, NULL, 0, 0, 0);
    codeobj_0148c397022124332b869ce98555ee39 = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], NULL, NULL, 0, 0, 0);
    codeobj_b9cd63e48cb515779158a883841a94d3 = MAKE_CODE_OBJECT(module_filename_obj, 204, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[87], mod_consts[87], NULL, NULL, 0, 0, 0);
    codeobj_14d28e112ab0df7769147506db4bd46f = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[71], NULL, NULL, 0, 0, 0);
    codeobj_69b07ba9739a1dc6074dd503078f6a27 = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], NULL, NULL, 0, 0, 0);
    codeobj_1f26e48b43e324fd6a20eb64d1daa0c2 = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[82], mod_consts[82], NULL, NULL, 0, 0, 0);
    codeobj_ca043f9e2b4c3991b74460fde82240be = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], mod_consts[73], NULL, NULL, 0, 0, 0);
    codeobj_c6265cc316f31304396252eaa5f0b954 = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[92], mod_consts[92], NULL, NULL, 0, 0, 0);
    codeobj_b0147fb5c7cbdff2ca12eeffcf82d90d = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[67], mod_consts[67], NULL, NULL, 0, 0, 0);
    codeobj_557a9b0208cd19cf0bbbb0073a2e7984 = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[98], mod_consts[98], NULL, NULL, 0, 0, 0);
    codeobj_f98b6a93b91f4aeffb0518f49c4638c5 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[74], mod_consts[74], NULL, NULL, 0, 0, 0);
    codeobj_f59af9c3c6c2bdc92121f7d872e26ef7 = MAKE_CODE_OBJECT(module_filename_obj, 270, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[97], mod_consts[97], NULL, NULL, 0, 0, 0);
    codeobj_1dc072ff87f17910e441377c8f349cc9 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[68], mod_consts[68], NULL, NULL, 0, 0, 0);
    codeobj_2d2a68f94895ba4744178b72385175c9 = MAKE_CODE_OBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[86], mod_consts[86], NULL, NULL, 0, 0, 0);
    codeobj_8bea8f1d40ae0b51a6e70a045c41e93e = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[79], mod_consts[79], NULL, NULL, 0, 0, 0);
    codeobj_46444994e79169955ec06bae53adcffa = MAKE_CODE_OBJECT(module_filename_obj, 260, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[95], mod_consts[95], NULL, NULL, 0, 0, 0);
    codeobj_fa3260519064e56c933c1ace09595fe6 = MAKE_CODE_OBJECT(module_filename_obj, 226, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[90], mod_consts[90], NULL, NULL, 0, 0, 0);
    codeobj_f7a9e73406e2596dbce17e866377612c = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[72], NULL, NULL, 0, 0, 0);
    codeobj_cf4409ea747fe9b4c09ccf8146715b9e = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[85], mod_consts[85], NULL, NULL, 0, 0, 0);
    codeobj_b42ccd21e24b87a50128eec2126ac738 = MAKE_CODE_OBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[76], NULL, NULL, 0, 0, 0);
    codeobj_f5d467fac28e72955194c07d442c0719 = MAKE_CODE_OBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[77], NULL, NULL, 0, 0, 0);
    codeobj_b49bbe4e79789944154d85e4957e4183 = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[81], mod_consts[81], NULL, NULL, 0, 0, 0);
    codeobj_e10b4971fb69fc6702f1e3ecea5f9f54 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], mod_consts[66], NULL, NULL, 0, 0, 0);
    codeobj_7d541816dd23794a3e18f6d8c43ddf63 = MAKE_CODE_OBJECT(module_filename_obj, 8, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[63], NULL, NULL, 0, 0, 0);
    codeobj_b26ccafaebff66785f51d0d036a75534 = MAKE_CODE_OBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[84], mod_consts[84], NULL, NULL, 0, 0, 0);
    codeobj_864a3db9febaf559dd9a284b5507c32e = MAKE_CODE_OBJECT(module_filename_obj, 217, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[89], mod_consts[89], NULL, NULL, 0, 0, 0);
    codeobj_4628b6d4cdc30015aaf54ecf41be2ad0 = MAKE_CODE_OBJECT(module_filename_obj, 264, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[96], mod_consts[96], NULL, NULL, 0, 0, 0);
    codeobj_a0d20be547245836d8785e652a3027ca = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[75], mod_consts[75], NULL, NULL, 0, 0, 0);
    codeobj_0243199e610a31a0bcbe380033d765a0 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[64], mod_consts[64], NULL, NULL, 0, 0, 0);
    codeobj_028a949aeef3f20f48dd984fbdeb1e02 = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], mod_consts[65], NULL, NULL, 0, 0, 0);
    codeobj_2f320c982ef46017083b823fa3fddcd2 = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[80], mod_consts[80], NULL, NULL, 0, 0, 0);
    codeobj_683b015978633bfd6b4903d3cf7f89be = MAKE_CODE_OBJECT(module_filename_obj, 256, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[94], mod_consts[94], NULL, NULL, 0, 0, 0);
    codeobj_94ca14100b218c235ce99cd99f3636b1 = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[83], NULL, NULL, 0, 0, 0);
    codeobj_f8310ddfc4dcad32f5bb953c0a156d5e = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[69], mod_consts[69], NULL, NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_poly1305(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_evp_digestfinal_xof(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_fips(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_ssl_sigalgs(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_psk(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_psk_tlsv13(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_custom_ext(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_openssl_cleanup(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_tlsv13_functions(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_raw_key(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_set_cert_cb(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_engine(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__21_cryptography_has_verified_chain(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__22_cryptography_has_srtp(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__23_cryptography_has_providers(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__24_cryptography_has_op_no_renegotiation(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__25_cryptography_has_dtls_get_data_mtu(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__26_cryptography_has_300_fips(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__27_cryptography_has_ssl_cookie(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__28_cryptography_has_pkcs7_funcs(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__29_cryptography_has_bn_flags(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_ssl_st(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__30_cryptography_has_evp_pkey_dh(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__31_cryptography_has_300_evp_cipher(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__32_cryptography_has_unexpected_eof_while_reading(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__33_cryptography_has_pkcs12_set_mac(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__34_cryptography_has_ssl_op_ignore_unexpected_eof(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__35_cryptography_has_get_extms_support(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__36_cryptography_has_evp_pkey_set_peer_ex(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_tls_st(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_scrypt(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_evp_pkey_dhx(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_mem_functions(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_x509_store_ctx_get_issuer(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_ed448(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_ed25519(PyObject *annotations);


// The module function definitions.
static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_set_cert_cb(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST2(mod_consts[0],mod_consts[1]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_ssl_st(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST4(mod_consts[2]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_tls_st(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST2(mod_consts[3],mod_consts[4]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_scrypt(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST1(mod_consts[5]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_evp_pkey_dhx(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST3(mod_consts[6],mod_consts[7],mod_consts[8]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_mem_functions(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST1(mod_consts[9]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_x509_store_ctx_get_issuer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST1(mod_consts[10]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_ed448(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST2(mod_consts[11],mod_consts[12]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_ed25519(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST2(mod_consts[13],mod_consts[14]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_poly1305(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST2(mod_consts[15],mod_consts[16]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_evp_digestfinal_xof(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST1(mod_consts[17]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_fips(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST2(mod_consts[18],mod_consts[19]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_ssl_sigalgs(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST1(mod_consts[20]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_psk(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST3(mod_consts[21],mod_consts[22],mod_consts[23]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_psk_tlsv13(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST7(mod_consts[24]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_custom_ext(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST3(mod_consts[25],mod_consts[26],mod_consts[27]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_openssl_cleanup(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST1(mod_consts[28]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_tlsv13_functions(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST9(mod_consts[29]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_raw_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST4(mod_consts[30]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_engine(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[31]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__21_cryptography_has_verified_chain(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST1(mod_consts[32]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__22_cryptography_has_srtp(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST3(mod_consts[33],mod_consts[34],mod_consts[35]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__23_cryptography_has_providers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST5(mod_consts[36]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__24_cryptography_has_op_no_renegotiation(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST1(mod_consts[37]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__25_cryptography_has_dtls_get_data_mtu(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST1(mod_consts[38]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__26_cryptography_has_300_fips(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST2(mod_consts[39],mod_consts[40]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__27_cryptography_has_ssl_cookie(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST4(mod_consts[41]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__28_cryptography_has_pkcs7_funcs(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST7(mod_consts[42]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__29_cryptography_has_bn_flags(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST3(mod_consts[43],mod_consts[44],mod_consts[45]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__30_cryptography_has_evp_pkey_dh(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST1(mod_consts[46]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__31_cryptography_has_300_evp_cipher(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST2(mod_consts[47],mod_consts[48]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__32_cryptography_has_unexpected_eof_while_reading(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST1(mod_consts[49]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__33_cryptography_has_pkcs12_set_mac(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST1(mod_consts[50]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__34_cryptography_has_ssl_op_ignore_unexpected_eof(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST1(mod_consts[51]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__35_cryptography_has_get_extms_support(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST1(mod_consts[52]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__36_cryptography_has_evp_pkey_set_peer_ex(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST1(mod_consts[53]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_poly1305(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_poly1305,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f7a9e73406e2596dbce17e866377612c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_evp_digestfinal_xof(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_evp_digestfinal_xof,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ca043f9e2b4c3991b74460fde82240be,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_fips(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_fips,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f98b6a93b91f4aeffb0518f49c4638c5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_ssl_sigalgs(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_ssl_sigalgs,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a0d20be547245836d8785e652a3027ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_psk(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_psk,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b42ccd21e24b87a50128eec2126ac738,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_psk_tlsv13(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_psk_tlsv13,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f5d467fac28e72955194c07d442c0719,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_custom_ext(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_custom_ext,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0148c397022124332b869ce98555ee39,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_openssl_cleanup(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_openssl_cleanup,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8bea8f1d40ae0b51a6e70a045c41e93e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_tlsv13_functions(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_tlsv13_functions,
        mod_consts[80],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2f320c982ef46017083b823fa3fddcd2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_raw_key(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_raw_key,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b49bbe4e79789944154d85e4957e4183,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_set_cert_cb(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_set_cert_cb,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7d541816dd23794a3e18f6d8c43ddf63,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_engine(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_engine,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1f26e48b43e324fd6a20eb64d1daa0c2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__21_cryptography_has_verified_chain(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__21_cryptography_has_verified_chain,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_94ca14100b218c235ce99cd99f3636b1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__22_cryptography_has_srtp(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__22_cryptography_has_srtp,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b26ccafaebff66785f51d0d036a75534,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__23_cryptography_has_providers(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__23_cryptography_has_providers,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cf4409ea747fe9b4c09ccf8146715b9e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__24_cryptography_has_op_no_renegotiation(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__24_cryptography_has_op_no_renegotiation,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2d2a68f94895ba4744178b72385175c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__25_cryptography_has_dtls_get_data_mtu(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__25_cryptography_has_dtls_get_data_mtu,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b9cd63e48cb515779158a883841a94d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__26_cryptography_has_300_fips(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__26_cryptography_has_300_fips,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1829f7e156b6b36c140903a59fe1794d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__27_cryptography_has_ssl_cookie(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__27_cryptography_has_ssl_cookie,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_864a3db9febaf559dd9a284b5507c32e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__28_cryptography_has_pkcs7_funcs(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__28_cryptography_has_pkcs7_funcs,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fa3260519064e56c933c1ace09595fe6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__29_cryptography_has_bn_flags(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__29_cryptography_has_bn_flags,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_889f038a13100b4aa580a1dab7b9d8b1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_ssl_st(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_ssl_st,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0243199e610a31a0bcbe380033d765a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__30_cryptography_has_evp_pkey_dh(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__30_cryptography_has_evp_pkey_dh,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c6265cc316f31304396252eaa5f0b954,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__31_cryptography_has_300_evp_cipher(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__31_cryptography_has_300_evp_cipher,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6f8b0a8d6f537e40573e1f597dc8cb18,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__32_cryptography_has_unexpected_eof_while_reading(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__32_cryptography_has_unexpected_eof_while_reading,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_683b015978633bfd6b4903d3cf7f89be,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__33_cryptography_has_pkcs12_set_mac(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__33_cryptography_has_pkcs12_set_mac,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_46444994e79169955ec06bae53adcffa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__34_cryptography_has_ssl_op_ignore_unexpected_eof(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__34_cryptography_has_ssl_op_ignore_unexpected_eof,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4628b6d4cdc30015aaf54ecf41be2ad0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__35_cryptography_has_get_extms_support(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__35_cryptography_has_get_extms_support,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f59af9c3c6c2bdc92121f7d872e26ef7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__36_cryptography_has_evp_pkey_set_peer_ex(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__36_cryptography_has_evp_pkey_set_peer_ex,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_557a9b0208cd19cf0bbbb0073a2e7984,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_tls_st(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_tls_st,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_028a949aeef3f20f48dd984fbdeb1e02,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_scrypt(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_scrypt,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e10b4971fb69fc6702f1e3ecea5f9f54,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_evp_pkey_dhx(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_evp_pkey_dhx,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b0147fb5c7cbdff2ca12eeffcf82d90d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_mem_functions(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_mem_functions,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1dc072ff87f17910e441377c8f349cc9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_x509_store_ctx_get_issuer(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_x509_store_ctx_get_issuer,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f8310ddfc4dcad32f5bb953c0a156d5e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_ed448(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_ed448,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_69b07ba9739a1dc6074dd503078f6a27,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_ed25519(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_ed25519,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_14d28e112ab0df7769147506db4bd46f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_cryptography$hazmat$bindings$openssl$_conditional[] = {
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_set_cert_cb,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_ssl_st,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_tls_st,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_scrypt,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_evp_pkey_dhx,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_mem_functions,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_x509_store_ctx_get_issuer,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_ed448,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_ed25519,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_poly1305,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_evp_digestfinal_xof,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_fips,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_ssl_sigalgs,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_psk,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_psk_tlsv13,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_custom_ext,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_openssl_cleanup,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_tlsv13_functions,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_raw_key,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_engine,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__21_cryptography_has_verified_chain,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__22_cryptography_has_srtp,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__23_cryptography_has_providers,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__24_cryptography_has_op_no_renegotiation,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__25_cryptography_has_dtls_get_data_mtu,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__26_cryptography_has_300_fips,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__27_cryptography_has_ssl_cookie,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__28_cryptography_has_pkcs7_funcs,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__29_cryptography_has_bn_flags,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__30_cryptography_has_evp_pkey_dh,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__31_cryptography_has_300_evp_cipher,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__32_cryptography_has_unexpected_eof_while_reading,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__33_cryptography_has_pkcs12_set_mac,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__34_cryptography_has_ssl_op_ignore_unexpected_eof,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__35_cryptography_has_get_extms_support,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__36_cryptography_has_evp_pkey_set_peer_ex,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_cryptography$hazmat$bindings$openssl$_conditional;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_cryptography$hazmat$bindings$openssl$_conditional) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_cryptography$hazmat$bindings$openssl$_conditional[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_cryptography$hazmat$bindings$openssl$_conditional(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("cryptography.hazmat.bindings.openssl._conditional");

    // Store the module for future use.
    module_cryptography$hazmat$bindings$openssl$_conditional = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("cryptography.hazmat.bindings.openssl._conditional: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("cryptography.hazmat.bindings.openssl._conditional: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("cryptography.hazmat.bindings.openssl._conditional: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initcryptography$hazmat$bindings$openssl$_conditional\n");

    moduledict_cryptography$hazmat$bindings$openssl$_conditional = MODULE_DICT(module_cryptography$hazmat$bindings$openssl$_conditional);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_cryptography$hazmat$bindings$openssl$_conditional,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$bindings$openssl$_conditional,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[138]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$bindings$openssl$_conditional,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$bindings$openssl$_conditional,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$bindings$openssl$_conditional,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$hazmat$bindings$openssl$_conditional);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_cryptography$hazmat$bindings$openssl$_conditional);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_37990b4b27b13efdc11edb5d27d9741a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_2);
    }
    frame_37990b4b27b13efdc11edb5d27d9741a = MAKE_MODULE_FRAME(codeobj_37990b4b27b13efdc11edb5d27d9741a, module_cryptography$hazmat$bindings$openssl$_conditional);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_37990b4b27b13efdc11edb5d27d9741a);
    assert(Py_REFCNT(frame_37990b4b27b13efdc11edb5d27d9741a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[57], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[58], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        tmp_dict_key_1 = mod_consts[61];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[62]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));


        tmp_assign_source_5 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_set_cert_cb(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        tmp_dict_key_2 = mod_consts[61];
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_4 == NULL));
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[62]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));


        tmp_assign_source_6 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_ssl_st(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        tmp_dict_key_3 = mod_consts[61];
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_6 == NULL));
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[62]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        assert(!(tmp_res != 0));


        tmp_assign_source_7 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_tls_st(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_4;
        tmp_dict_key_4 = mod_consts[61];
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_8 == NULL));
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[62]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        Py_DECREF(tmp_dict_value_4);
        assert(!(tmp_res != 0));


        tmp_assign_source_8 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_scrypt(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_5;
        tmp_dict_key_5 = mod_consts[61];
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_10 == NULL));
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[62]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_5);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));


        tmp_assign_source_9 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_evp_pkey_dhx(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_6;
        tmp_dict_key_6 = mod_consts[61];
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_12 == NULL));
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[62]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
        Py_DECREF(tmp_dict_value_6);
        assert(!(tmp_res != 0));


        tmp_assign_source_10 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_mem_functions(tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_annotations_7;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_7;
        tmp_dict_key_7 = mod_consts[61];
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_14 == NULL));
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[62]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_7 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_7);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_annotations_7 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
        Py_DECREF(tmp_dict_value_7);
        assert(!(tmp_res != 0));


        tmp_assign_source_11 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_x509_store_ctx_get_issuer(tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_8;
        tmp_dict_key_8 = mod_consts[61];
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_16 == NULL));
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[62]);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_8 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_8);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_annotations_8 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
        Py_DECREF(tmp_dict_value_8);
        assert(!(tmp_res != 0));


        tmp_assign_source_12 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_ed448(tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_annotations_9;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_9;
        tmp_dict_key_9 = mod_consts[61];
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_18 == NULL));
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[62]);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_9 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_9);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_annotations_9 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
        Py_DECREF(tmp_dict_value_9);
        assert(!(tmp_res != 0));


        tmp_assign_source_13 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_ed25519(tmp_annotations_9);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_annotations_10;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_10;
        tmp_dict_key_10 = mod_consts[61];
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_20 == NULL));
        tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[62]);
        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_10 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_10);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_annotations_10 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
        Py_DECREF(tmp_dict_value_10);
        assert(!(tmp_res != 0));


        tmp_assign_source_14 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_poly1305(tmp_annotations_10);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_annotations_11;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_11;
        tmp_dict_key_11 = mod_consts[61];
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_22 == NULL));
        tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[62]);
        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_11 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_11);
        Py_DECREF(tmp_expression_value_21);
        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_annotations_11 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
        Py_DECREF(tmp_dict_value_11);
        assert(!(tmp_res != 0));


        tmp_assign_source_15 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_evp_digestfinal_xof(tmp_annotations_11);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_annotations_12;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_12;
        tmp_dict_key_12 = mod_consts[61];
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_24 == NULL));
        tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[62]);
        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_12 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_12);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_annotations_12 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
        Py_DECREF(tmp_dict_value_12);
        assert(!(tmp_res != 0));


        tmp_assign_source_16 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_fips(tmp_annotations_12);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_annotations_13;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_13;
        tmp_dict_key_13 = mod_consts[61];
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_26 == NULL));
        tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[62]);
        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_13 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_13);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_annotations_13 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
        Py_DECREF(tmp_dict_value_13);
        assert(!(tmp_res != 0));


        tmp_assign_source_17 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_ssl_sigalgs(tmp_annotations_13);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_annotations_14;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_14;
        tmp_dict_key_14 = mod_consts[61];
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_28 == NULL));
        tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[62]);
        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_14 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_14);
        Py_DECREF(tmp_expression_value_27);
        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_annotations_14 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
        Py_DECREF(tmp_dict_value_14);
        assert(!(tmp_res != 0));


        tmp_assign_source_18 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_psk(tmp_annotations_14);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_annotations_15;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_15;
        tmp_dict_key_15 = mod_consts[61];
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_30 == NULL));
        tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[62]);
        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_15 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_15);
        Py_DECREF(tmp_expression_value_29);
        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_annotations_15 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
        Py_DECREF(tmp_dict_value_15);
        assert(!(tmp_res != 0));


        tmp_assign_source_19 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_psk_tlsv13(tmp_annotations_15);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_annotations_16;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_16;
        tmp_dict_key_16 = mod_consts[61];
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_32 == NULL));
        tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[62]);
        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_16 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_16);
        Py_DECREF(tmp_expression_value_31);
        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_annotations_16 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
        Py_DECREF(tmp_dict_value_16);
        assert(!(tmp_res != 0));


        tmp_assign_source_20 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_custom_ext(tmp_annotations_16);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_annotations_17;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_17;
        tmp_dict_key_17 = mod_consts[61];
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_34 == NULL));
        tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[62]);
        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_17 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_17);
        Py_DECREF(tmp_expression_value_33);
        if (tmp_dict_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_annotations_17 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
        Py_DECREF(tmp_dict_value_17);
        assert(!(tmp_res != 0));


        tmp_assign_source_21 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_openssl_cleanup(tmp_annotations_17);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_annotations_18;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_18;
        tmp_dict_key_18 = mod_consts[61];
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_36 == NULL));
        tmp_expression_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[62]);
        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_18 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_18);
        Py_DECREF(tmp_expression_value_35);
        if (tmp_dict_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_annotations_18 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
        Py_DECREF(tmp_dict_value_18);
        assert(!(tmp_res != 0));


        tmp_assign_source_22 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_tlsv13_functions(tmp_annotations_18);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_annotations_19;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_subscript_value_19;
        tmp_dict_key_19 = mod_consts[61];
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_38 == NULL));
        tmp_expression_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[62]);
        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_19 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_19);
        Py_DECREF(tmp_expression_value_37);
        if (tmp_dict_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_annotations_19 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
        Py_DECREF(tmp_dict_value_19);
        assert(!(tmp_res != 0));


        tmp_assign_source_23 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_raw_key(tmp_annotations_19);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_annotations_20;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_subscript_value_20;
        tmp_dict_key_20 = mod_consts[61];
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_40 == NULL));
        tmp_expression_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[62]);
        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_20 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_20);
        Py_DECREF(tmp_expression_value_39);
        if (tmp_dict_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_annotations_20 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
        Py_DECREF(tmp_dict_value_20);
        assert(!(tmp_res != 0));


        tmp_assign_source_24 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_engine(tmp_annotations_20);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_annotations_21;
        PyObject *tmp_dict_key_21;
        PyObject *tmp_dict_value_21;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_21;
        tmp_dict_key_21 = mod_consts[61];
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_42 == NULL));
        tmp_expression_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[62]);
        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_21 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_21);
        Py_DECREF(tmp_expression_value_41);
        if (tmp_dict_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_annotations_21 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
        Py_DECREF(tmp_dict_value_21);
        assert(!(tmp_res != 0));


        tmp_assign_source_25 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__21_cryptography_has_verified_chain(tmp_annotations_21);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_annotations_22;
        PyObject *tmp_dict_key_22;
        PyObject *tmp_dict_value_22;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_subscript_value_22;
        tmp_dict_key_22 = mod_consts[61];
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_44 == NULL));
        tmp_expression_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[62]);
        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_22 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_22);
        Py_DECREF(tmp_expression_value_43);
        if (tmp_dict_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_annotations_22 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
        Py_DECREF(tmp_dict_value_22);
        assert(!(tmp_res != 0));


        tmp_assign_source_26 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__22_cryptography_has_srtp(tmp_annotations_22);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_annotations_23;
        PyObject *tmp_dict_key_23;
        PyObject *tmp_dict_value_23;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_subscript_value_23;
        tmp_dict_key_23 = mod_consts[61];
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_46 == NULL));
        tmp_expression_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[62]);
        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_23 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_23);
        Py_DECREF(tmp_expression_value_45);
        if (tmp_dict_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_annotations_23 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
        Py_DECREF(tmp_dict_value_23);
        assert(!(tmp_res != 0));


        tmp_assign_source_27 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__23_cryptography_has_providers(tmp_annotations_23);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_annotations_24;
        PyObject *tmp_dict_key_24;
        PyObject *tmp_dict_value_24;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_subscript_value_24;
        tmp_dict_key_24 = mod_consts[61];
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_48 == NULL));
        tmp_expression_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[62]);
        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_24 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_24);
        Py_DECREF(tmp_expression_value_47);
        if (tmp_dict_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_annotations_24 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
        Py_DECREF(tmp_dict_value_24);
        assert(!(tmp_res != 0));


        tmp_assign_source_28 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__24_cryptography_has_op_no_renegotiation(tmp_annotations_24);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_annotations_25;
        PyObject *tmp_dict_key_25;
        PyObject *tmp_dict_value_25;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_subscript_value_25;
        tmp_dict_key_25 = mod_consts[61];
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_50 == NULL));
        tmp_expression_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[62]);
        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_25 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_25);
        Py_DECREF(tmp_expression_value_49);
        if (tmp_dict_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_annotations_25 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
        Py_DECREF(tmp_dict_value_25);
        assert(!(tmp_res != 0));


        tmp_assign_source_29 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__25_cryptography_has_dtls_get_data_mtu(tmp_annotations_25);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_annotations_26;
        PyObject *tmp_dict_key_26;
        PyObject *tmp_dict_value_26;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_subscript_value_26;
        tmp_dict_key_26 = mod_consts[61];
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_52 == NULL));
        tmp_expression_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[62]);
        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_26 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_51, tmp_subscript_value_26);
        Py_DECREF(tmp_expression_value_51);
        if (tmp_dict_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_annotations_26 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
        Py_DECREF(tmp_dict_value_26);
        assert(!(tmp_res != 0));


        tmp_assign_source_30 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__26_cryptography_has_300_fips(tmp_annotations_26);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_annotations_27;
        PyObject *tmp_dict_key_27;
        PyObject *tmp_dict_value_27;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_subscript_value_27;
        tmp_dict_key_27 = mod_consts[61];
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_54 == NULL));
        tmp_expression_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[62]);
        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_27 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_27);
        Py_DECREF(tmp_expression_value_53);
        if (tmp_dict_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_annotations_27 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
        Py_DECREF(tmp_dict_value_27);
        assert(!(tmp_res != 0));


        tmp_assign_source_31 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__27_cryptography_has_ssl_cookie(tmp_annotations_27);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_annotations_28;
        PyObject *tmp_dict_key_28;
        PyObject *tmp_dict_value_28;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_subscript_value_28;
        tmp_dict_key_28 = mod_consts[61];
        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_56 == NULL)) {
            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_56 == NULL));
        tmp_expression_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[62]);
        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_28 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_55, tmp_subscript_value_28);
        Py_DECREF(tmp_expression_value_55);
        if (tmp_dict_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_annotations_28 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_28, tmp_dict_value_28);
        Py_DECREF(tmp_dict_value_28);
        assert(!(tmp_res != 0));


        tmp_assign_source_32 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__28_cryptography_has_pkcs7_funcs(tmp_annotations_28);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_annotations_29;
        PyObject *tmp_dict_key_29;
        PyObject *tmp_dict_value_29;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_subscript_value_29;
        tmp_dict_key_29 = mod_consts[61];
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_58 == NULL));
        tmp_expression_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[62]);
        if (tmp_expression_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_29 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_57, tmp_subscript_value_29);
        Py_DECREF(tmp_expression_value_57);
        if (tmp_dict_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_annotations_29 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_29, tmp_dict_value_29);
        Py_DECREF(tmp_dict_value_29);
        assert(!(tmp_res != 0));


        tmp_assign_source_33 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__29_cryptography_has_bn_flags(tmp_annotations_29);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_annotations_30;
        PyObject *tmp_dict_key_30;
        PyObject *tmp_dict_value_30;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_subscript_value_30;
        tmp_dict_key_30 = mod_consts[61];
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_60 == NULL));
        tmp_expression_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[62]);
        if (tmp_expression_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_30 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_59, tmp_subscript_value_30);
        Py_DECREF(tmp_expression_value_59);
        if (tmp_dict_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_annotations_30 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_30, tmp_dict_value_30);
        Py_DECREF(tmp_dict_value_30);
        assert(!(tmp_res != 0));


        tmp_assign_source_34 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__30_cryptography_has_evp_pkey_dh(tmp_annotations_30);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_annotations_31;
        PyObject *tmp_dict_key_31;
        PyObject *tmp_dict_value_31;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_subscript_value_31;
        tmp_dict_key_31 = mod_consts[61];
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_62 == NULL));
        tmp_expression_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[62]);
        if (tmp_expression_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_31 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_61, tmp_subscript_value_31);
        Py_DECREF(tmp_expression_value_61);
        if (tmp_dict_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_annotations_31 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_31, tmp_dict_value_31);
        Py_DECREF(tmp_dict_value_31);
        assert(!(tmp_res != 0));


        tmp_assign_source_35 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__31_cryptography_has_300_evp_cipher(tmp_annotations_31);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_annotations_32;
        PyObject *tmp_dict_key_32;
        PyObject *tmp_dict_value_32;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_subscript_value_32;
        tmp_dict_key_32 = mod_consts[61];
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_64 == NULL));
        tmp_expression_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[62]);
        if (tmp_expression_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_32 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_32 = LOOKUP_SUBSCRIPT(tmp_expression_value_63, tmp_subscript_value_32);
        Py_DECREF(tmp_expression_value_63);
        if (tmp_dict_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_annotations_32 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_32, tmp_dict_value_32);
        Py_DECREF(tmp_dict_value_32);
        assert(!(tmp_res != 0));


        tmp_assign_source_36 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__32_cryptography_has_unexpected_eof_while_reading(tmp_annotations_32);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_annotations_33;
        PyObject *tmp_dict_key_33;
        PyObject *tmp_dict_value_33;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_subscript_value_33;
        tmp_dict_key_33 = mod_consts[61];
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_66 == NULL));
        tmp_expression_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[62]);
        if (tmp_expression_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_33 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_33 = LOOKUP_SUBSCRIPT(tmp_expression_value_65, tmp_subscript_value_33);
        Py_DECREF(tmp_expression_value_65);
        if (tmp_dict_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        tmp_annotations_33 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_33, tmp_dict_key_33, tmp_dict_value_33);
        Py_DECREF(tmp_dict_value_33);
        assert(!(tmp_res != 0));


        tmp_assign_source_37 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__33_cryptography_has_pkcs12_set_mac(tmp_annotations_33);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_annotations_34;
        PyObject *tmp_dict_key_34;
        PyObject *tmp_dict_value_34;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_subscript_value_34;
        tmp_dict_key_34 = mod_consts[61];
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_68 == NULL));
        tmp_expression_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[62]);
        if (tmp_expression_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_34 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_34 = LOOKUP_SUBSCRIPT(tmp_expression_value_67, tmp_subscript_value_34);
        Py_DECREF(tmp_expression_value_67);
        if (tmp_dict_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_annotations_34 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_34, tmp_dict_key_34, tmp_dict_value_34);
        Py_DECREF(tmp_dict_value_34);
        assert(!(tmp_res != 0));


        tmp_assign_source_38 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__34_cryptography_has_ssl_op_ignore_unexpected_eof(tmp_annotations_34);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_annotations_35;
        PyObject *tmp_dict_key_35;
        PyObject *tmp_dict_value_35;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_subscript_value_35;
        tmp_dict_key_35 = mod_consts[61];
        tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_70 == NULL)) {
            tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_70 == NULL));
        tmp_expression_value_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[62]);
        if (tmp_expression_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_35 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_35 = LOOKUP_SUBSCRIPT(tmp_expression_value_69, tmp_subscript_value_35);
        Py_DECREF(tmp_expression_value_69);
        if (tmp_dict_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_annotations_35 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_35, tmp_dict_key_35, tmp_dict_value_35);
        Py_DECREF(tmp_dict_value_35);
        assert(!(tmp_res != 0));


        tmp_assign_source_39 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__35_cryptography_has_get_extms_support(tmp_annotations_35);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_annotations_36;
        PyObject *tmp_dict_key_36;
        PyObject *tmp_dict_value_36;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_subscript_value_36;
        tmp_dict_key_36 = mod_consts[61];
        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_72 == NULL)) {
            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_72 == NULL));
        tmp_expression_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[62]);
        if (tmp_expression_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_36 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_36 = LOOKUP_SUBSCRIPT(tmp_expression_value_71, tmp_subscript_value_36);
        Py_DECREF(tmp_expression_value_71);
        if (tmp_dict_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_annotations_36 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_36, tmp_dict_value_36);
        Py_DECREF(tmp_dict_value_36);
        assert(!(tmp_res != 0));


        tmp_assign_source_40 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__36_cryptography_has_evp_pkey_set_peer_ex(tmp_annotations_36);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_dict_key_37;
        PyObject *tmp_dict_value_37;
        tmp_dict_key_37 = mod_consts[99];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_41 = _PyDict_NewPresized( 36 );
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[100];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[101];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[102];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[103];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[104];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[105];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[106];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[107];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[108];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[109];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[110];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[111];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[112];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[113];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[114];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[115];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[116];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[117];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[118];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[119];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[120];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[121];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[122];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[123];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[124];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[125];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[126];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[127];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[128];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[129];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[130];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[131];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[132];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[133];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[134];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        assert(!(tmp_dict_value_37 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_41);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_41);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_37990b4b27b13efdc11edb5d27d9741a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_37990b4b27b13efdc11edb5d27d9741a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_37990b4b27b13efdc11edb5d27d9741a, exception_lineno);
    }



    assertFrameObject(frame_37990b4b27b13efdc11edb5d27d9741a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("cryptography.hazmat.bindings.openssl._conditional", false);

    Py_INCREF(module_cryptography$hazmat$bindings$openssl$_conditional);
    return module_cryptography$hazmat$bindings$openssl$_conditional;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("cryptography$hazmat$bindings$openssl$_conditional", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
