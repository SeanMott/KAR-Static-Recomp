//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80205310.hpp"
#include "fn_80204FAC.hpp"
#include "fn_801FC398.hpp"
#include "fn_80206E1C.hpp"



void fn_80217F50(PPC::Runtime::GCContext* context)
{
/*80217F50 00214D50*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80217F54 00214D54*/ PPC::Runtime::ASM::mflr(context->r0);
/*80217F58 00214D58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80217F5C 00214D5C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80217F60 00214D60*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80217F64 00214D64*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80217F68 00214D68*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80217F6C 00214D6C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c0, context->r3));
/*80217F70 00214D70*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80217F74 00214D74*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x95c, context->r3));
/*80217F78 00214D78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r3));
/*80217F7C 00214D7C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80217F80 00214D80*/ PPC::Runtime::ASM::bne(.L_80217FA4);
/*80217F84 00214D84*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80217F88 00214D88*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2668 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80217F8C 00214D8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r30));
/*80217F90 00214D90*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2664 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80217F94 00214D94*/ PPC::Runtime::ASM::bl(fn_80205310);
/*80217F98 00214D98*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x95c, context->r30));
/*80217F9C 00214D9C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80217FA0 00214DA0*/ PPC::Runtime::ASM::bl(fn_80204FAC);
RUNTIME_PPC_JUMP_LABEL(.L_80217FA4, 0x80217FA4) //this is a jump label
/*80217FA4 00214DA4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r30));
/*80217FA8 00214DA8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80217FAC 00214DAC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*80217FB0 00214DB0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2660 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80217FB4 00214DB4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r30));
/*80217FB8 00214DB8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80217FBC 00214DBC*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80217FC0 00214DC0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2664 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80217FC4 00214DC4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x87c, context->r30));
/*80217FC8 00214DC8*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*80217FCC 00214DCC*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*80217FD0 00214DD0*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*80217FD4 00214DD4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80217FD8 00214DD8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80217FDC 00214DDC*/ PPC::Runtime::ASM::bl(fn_80206E1C);
/*80217FE0 00214DE0*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*80217FE4 00214DE4*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*80217FE8 00214DE8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80217FEC 00214DEC*/ PPC::Runtime::ASM::beq(.L_80217FF8);
/*80217FF0 00214DF0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80217FF4 00214DF4*/ PPC::Runtime::ASM::b(.L_80218000);
RUNTIME_PPC_JUMP_LABEL(.L_80217FF8, 0x80217FF8) //this is a jump label
/*80217FF8 00214DF8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80217FFC 00214DFC*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_80218000, 0x80218000) //this is a jump label
/*80218000 00214E00*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb48, context->r30));
/*80218004 00214E04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80218008 00214E08*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021800C 00214E0C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80218010 00214E10*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80218014 00214E14*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80218018 00214E18*/ PPC::Runtime::ASM::blr();
}