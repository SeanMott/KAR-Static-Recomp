//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8013127C.hpp"
#include "fn_80059520.hpp"



void fn_801724B8(PPC::Runtime::GCContext* context)
{
/*801724B8 0016F2B8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801724BC 0016F2BC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801724C0 0016F2C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801724C4 0016F2C4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801724C8 0016F2C8*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801724CC 0016F2CC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801724D0 0016F2D0*/ PPC::Runtime::ASM::bl(fn_8013127C);
/*801724D4 0016F2D4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804ACDD8 @ Get_MemoryOffset_HighBit);
/*801724D8 0016F2D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801724DC 0016F2DC*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804ACDD8 @ Get_MemoryOffset_LowBit);
/*801724E0 0016F2E0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801724E4 0016F2E4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xc7c);
/*801724E8 0016F2E8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801724EC 0016F2EC*/ PPC::Runtime::ASM::bl(fn_80059520);
/*801724F0 0016F2F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801724F4 0016F2F4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801724F8 0016F2F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801724FC 0016F2FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80172500 0016F300*/ PPC::Runtime::ASM::blr();
}