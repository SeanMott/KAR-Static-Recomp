//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800547E0.hpp"
#include "fn_800D7B50.hpp"
#include "fn_killWhispy.hpp"



void fn_80105FD4(PPC::Runtime::GCContext* context)
{
/*80105FD4 00102DD4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80105FD8 00102DD8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80105FDC 00102DDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80105FE0 00102DE0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80105FE4 00102DE4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80105FE8 00102DE8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80105FEC 00102DEC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80105FF0 00102DF0*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80105FF4 00102DF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80105FF8 00102DF8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r4));
/*80105FFC 00102DFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80106000 00102E00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80106004 00102E04*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*80106008 00102E08*/ PPC::Runtime::ASM::lwzx(context->r3, context->r4, context->r0);
/*8010600C 00102E0C*/ PPC::Runtime::ASM::bl(fn_800547E0);
/*80106010 00102E10*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80106014 00102E14*/ PPC::Runtime::ASM::bne(.L_8010607C);
/*80106018 00102E18*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8010601C 00102E1C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80106020 00102E20*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80106024 00102E24*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r30));
/*80106028 00102E28*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8010602C 00102E2C*/ PPC::Runtime::ASM::bl(fn_800D7B50);
/*80106030 00102E30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80106034 00102E34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r30));
/*80106038 00102E38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8010603C 00102E3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80106040 00102E40*/ PPC::Runtime::ASM::subf.(context->r3, context->r3, context->r0);
/*80106044 00102E44*/ PPC::Runtime::ASM::ble(.L_80106058);
/*80106048 00102E48*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*8010604C 00102E4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r30));
/*80106050 00102E50*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r3);
/*80106054 00102E54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80106058, 0x80106058) //this is a jump label
/*80106058 00102E58*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFA30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010605C 00102E5C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80106060 00102E60*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80106064 00102E64*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80106068 00102E68*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*8010606C 00102E6C*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*80106070 00102E70*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80106074 00102E74*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80106078 00102E78*/ PPC::Runtime::ASM::bl(fn_killWhispy);
RUNTIME_PPC_JUMP_LABEL(.L_8010607C, 0x8010607C) //this is a jump label
/*8010607C 00102E7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80106080 00102E80*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80106084 00102E84*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80106088 00102E88*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010608C 00102E8C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80106090 00102E90*/ PPC::Runtime::ASM::blr();
}