//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138BA4.hpp"



void fn_8014C458(PPC::Runtime::GCContext* context)
{
/*8014C458 00149258*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8014C45C 0014925C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014C460 00149260*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014C464 00149264*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014C468 00149268*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8014C46C 0014926C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8014C470 00149270*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014C474 00149274*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8014C478 00149278*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*8014C47C 0014927C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*8014C480 00149280*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r31));
/*8014C484 00149284*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8014C488 00149288*/ PPC::Runtime::ASM::ble(.L_8014C4B4);
/*8014C48C 0014928C*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
/*8014C490 00149290*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8014C494 00149294*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r31));
/*8014C498 00149298*/ PPC::Runtime::ASM::bgt(.L_8014C4B4);
/*8014C49C 0014929C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8014C4A0 001492A0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E05C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014C4A4 001492A4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r31));
/*8014C4A8 001492A8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8014C4AC 001492AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8014C4B0 001492B0*/ PPC::Runtime::ASM::bl(fn_80138BA4);
RUNTIME_PPC_JUMP_LABEL(.L_8014C4B4, 0x8014C4B4) //this is a jump label
/*8014C4B4 001492B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014C4B8 001492B8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014C4BC 001492BC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8014C4C0 001492C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014C4C4 001492C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8014C4C8 001492C8*/ PPC::Runtime::ASM::blr();
}