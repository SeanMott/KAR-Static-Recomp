//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80204FAC.hpp"
#include "fn_802041B0.hpp"
#include "fn_8021E9B4.hpp"
#include "fn_8021E9B4.hpp"
#include "fn_802042FC.hpp"



void fn_8021DFC0(PPC::Runtime::GCContext* context)
{
/*8021DFC0 0021ADC0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8021DFC4 0021ADC4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021DFC8 0021ADC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021DFCC 0021ADCC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021DFD0 0021ADD0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8021DFD4 0021ADD4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c0, context->r3));
/*8021DFD8 0021ADD8*/ PPC::Runtime::ASM::bl(fn_80204FAC);
/*8021DFDC 0021ADDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8021DFE0 0021ADE0*/ PPC::Runtime::ASM::bl(fn_802041B0);
/*8021DFE4 0021ADE4*/ PPC::Runtime::ASM::lis(context->r3, fn_8021E9B4 @ Get_MemoryOffset_HighBit);
/*8021DFE8 0021ADE8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_8021E9B4 @ Get_MemoryOffset_LowBit);
/*8021DFEC 0021ADEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xacc, context->r31));
/*8021DFF0 0021ADF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xad0, context->r31));
/*8021DFF4 0021ADF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8021DFF8 0021ADF8*/ PPC::Runtime::ASM::bl(fn_802042FC);
/*8021DFFC 0021ADFC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8021E000 0021AE00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb74, context->r31));
/*8021E004 0021AE04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb78, context->r31));
/*8021E008 0021AE08*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021E00C 0021AE0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021E010 0021AE10*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021E014 0021AE14*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8021E018 0021AE18*/ PPC::Runtime::ASM::blr();
}