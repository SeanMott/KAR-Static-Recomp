//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80191BB0.hpp"
#include "fn_801B4F10.hpp"



void fn_801B4D60(PPC::Runtime::GCContext* context)
{
/*801B4D60 001B1B60*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B4D64 001B1B64*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B4D68 001B1B68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B4D6C 001B1B6C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B4D70 001B1B70*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B4D74 001B1B74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x454, context->r3));
/*801B4D78 001B1B78*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x9);
/*801B4D7C 001B1B7C*/ PPC::Runtime::ASM::bne(.L_801B4DE0);
/*801B4D80 001B1B80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3d8, context->r31));
/*801B4D84 001B1B84*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 23, 23);
/*801B4D88 001B1B88*/ PPC::Runtime::ASM::bne(.L_801B4DE0);
/*801B4D8C 001B1B8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801B4D90 001B1B90*/ PPC::Runtime::ASM::bl(fn_80191BB0);
/*801B4D94 001B1B94*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1628 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B4D98 001B1B98*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801B4D9C 001B1B9C*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*801B4DA0 001B1BA0*/ PPC::Runtime::ASM::bne(.L_801B4DE0);
/*801B4DA4 001B1BA4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x394, context->r31));
/*801B4DA8 001B1BA8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E162C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B4DAC 001B1BAC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801B4DB0 001B1BB0*/ PPC::Runtime::ASM::bge(.L_801B4DBC);
/*801B4DB4 001B1BB4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*801B4DB8 001B1BB8*/ PPC::Runtime::ASM::b(.L_801B4DC0);
RUNTIME_PPC_JUMP_LABEL(.L_801B4DBC, 0x801B4DBC) //this is a jump label
/*801B4DBC 001B1BBC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801B4DC0, 0x801B4DC0) //this is a jump label
/*801B4DC0 001B1BC0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f0, context->r31));
/*801B4DC4 001B1BC4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801B4DC8 001B1BC8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 6, 25, 25);
/*801B4DCC 001B1BCC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f0, context->r31));
/*801B4DD0 001B1BD0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B4DD4 001B1BD4*/ PPC::Runtime::ASM::bl(fn_801B4F10);
/*801B4DD8 001B1BD8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801B4DDC 001B1BDC*/ PPC::Runtime::ASM::b(.L_801B4DE4);
RUNTIME_PPC_JUMP_LABEL(.L_801B4DE0, 0x801B4DE0) //this is a jump label
/*801B4DE0 001B1BE0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801B4DE4, 0x801B4DE4) //this is a jump label
/*801B4DE4 001B1BE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B4DE8 001B1BE8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B4DEC 001B1BEC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B4DF0 001B1BF0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B4DF4 001B1BF4*/ PPC::Runtime::ASM::blr();
}