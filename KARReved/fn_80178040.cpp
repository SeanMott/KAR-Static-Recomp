//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138B10.hpp"



void fn_80178040(PPC::Runtime::GCContext* context)
{
/*80178040 00174E40*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80178044 00174E44*/ PPC::Runtime::ASM::mflr(context->r0);
/*80178048 00174E48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017804C 00174E4C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80178050 00174E50*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd50, context->r3));
/*80178054 00174E54*/ PPC::Runtime::ASM::cmplwi(context->r6, 0x0);
/*80178058 00174E58*/ PPC::Runtime::ASM::beq(.L_80178078);
/*8017805C 00174E5C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4c, context->r3));
/*80178060 00174E60*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80178064 00174E64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r6));
/*80178068 00174E68*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8017806C 00174E6C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0CA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80178070 00174E70*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0CA4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80178074 00174E74*/ PPC::Runtime::ASM::bl(fn_80138B10);
RUNTIME_PPC_JUMP_LABEL(.L_80178078, 0x80178078) //this is a jump label
/*80178078 00174E78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017807C 00174E7C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80178080 00174E80*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80178084 00174E84*/ PPC::Runtime::ASM::blr();
}