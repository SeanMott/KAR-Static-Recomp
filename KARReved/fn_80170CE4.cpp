//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138B10.hpp"
#include "fn_800550F4.hpp"



void fn_80170CE4(PPC::Runtime::GCContext* context)
{
/*80170CE4 0016DAE4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80170CE8 0016DAE8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80170CEC 0016DAEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80170CF0 0016DAF0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80170CF4 0016DAF4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80170CF8 0016DAF8*/ PPC::Runtime::ASM::mr(context->r6, context->r3);
/*80170CFC 0016DAFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc48, context->r3));
/*80170D00 0016DB00*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80170D04 0016DB04*/ PPC::Runtime::ASM::beq(.L_80170D44);
/*80170D08 0016DB08*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80170D0C 0016DB0C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80170D10 0016DB10*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80170D14 0016DB14*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80170D18 0016DB18*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0BD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80170D1C 0016DB1C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80170D20 0016DB20*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*80170D24 0016DB24*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0BD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80170D28 0016DB28*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc44, context->r6));
/*80170D2C 0016DB2C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80170D30 0016DB30*/ PPC::Runtime::ASM::bl(fn_80138B10);
/*80170D34 0016DB34*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80170D38 0016DB38*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80170D3C 0016DB3C*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*80170D40 0016DB40*/ PPC::Runtime::ASM::bl(fn_800550F4);
RUNTIME_PPC_JUMP_LABEL(.L_80170D44, 0x80170D44) //this is a jump label
/*80170D44 0016DB44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80170D48 0016DB48*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80170D4C 0016DB4C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80170D50 0016DB50*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80170D54 0016DB54*/ PPC::Runtime::ASM::blr();
}