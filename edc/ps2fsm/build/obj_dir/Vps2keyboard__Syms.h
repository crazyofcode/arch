// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPS2KEYBOARD__SYMS_H_
#define VERILATED_VPS2KEYBOARD__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vps2keyboard.h"

// INCLUDE MODULE CLASSES
#include "Vps2keyboard___024root.h"

// SYMS CLASS (contains all model state)
class Vps2keyboard__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vps2keyboard* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vps2keyboard___024root         TOP;

    // CONSTRUCTORS
    Vps2keyboard__Syms(VerilatedContext* contextp, const char* namep, Vps2keyboard* modelp);
    ~Vps2keyboard__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
