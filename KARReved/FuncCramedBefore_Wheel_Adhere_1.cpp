//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_chargeLogic?.hpp"
#include "fn_801F5C1C.hpp"



void FuncCramedBefore_Wheel_Adhere_1(PPC::Runtime::GCContext* context)
{
/*801F8E18 001F5C18*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F8E1C 001F5C1C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F8E20 001F5C20*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2118 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F8E24 001F5C24*/ PPC::Runtime::ASM::li(context->r4, 0xb);
/*801F8E28 001F5C28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F8E2C 001F5C2C*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801F8E30 001F5C30*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E211C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F8E34 001F5C34*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801F8E38 001F5C38*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F8E3C 001F5C3C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801F8E40 001F5C40*/ PPC::Runtime::ASM::bl(fn_chargeLogic?);
/*801F8E44 001F5C44*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F8E48 001F5C48*/ PPC::Runtime::ASM::bl(fn_801F5C1C);
/*801F8E4C 001F5C4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F8E50 001F5C50*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F8E54 001F5C54*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F8E58 001F5C58*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F8E5C 001F5C5C*/ PPC::Runtime::ASM::blr();
}