//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FC398.hpp"
#include "fn_80210B68.hpp"
#include "fn_80210B68.hpp"



void fn_80211058(PPC::Runtime::GCContext* context)
{
/*80211058 0020DE58*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8021105C 0020DE5C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80211060 0020DE60*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2528 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80211064 0020DE64*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*80211068 0020DE68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8021106C 0020DE6C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80211070 0020DE70*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80211074 0020DE74*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E252C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80211078 0020DE78*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8021107C 0020DE7C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80211080 0020DE80*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80211084 0020DE84*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80211088 0020DE88*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8021108C 0020DE8C*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*80211090 0020DE90*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80211094 0020DE94*/ PPC::Runtime::ASM::lis(context->r3, fn_80210B68 @ Get_MemoryOffset_HighBit);
/*80211098 0020DE98*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4e, context->r28));
/*8021109C 0020DE9C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_80210B68 @ Get_MemoryOffset_LowBit);
/*802110A0 0020DEA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xad4, context->r28));
/*802110A4 0020DEA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*802110A8 0020DEA8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb09, context->r28));
/*802110AC 0020DEAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/* 802110B0 0020DEB0  54 05 EF BF */ extrwi. context->r5 , context->r0 , 2 , 27
/*802110B4 0020DEB4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*802110B8 0020DEB8*/ PPC::Runtime::ASM::bge(.L_802110C4);
/*802110BC 0020DEBC*/ PPC::Runtime::ASM::mr(context->r5, context->r4);
/*802110C0 0020DEC0*/ PPC::Runtime::ASM::b(.L_802110D0);
RUNTIME_PPC_JUMP_LABEL(.L_802110C4, 0x802110C4) //this is a jump label
/*802110C4 0020DEC4*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x2);
/*802110C8 0020DEC8*/ PPC::Runtime::ASM::ble(.L_802110D0);
/*802110CC 0020DECC*/ PPC::Runtime::ASM::li(context->r5, 0x2);
RUNTIME_PPC_JUMP_LABEL(.L_802110D0, 0x802110D0) //this is a jump label
/*802110D0 0020DED0*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4e, context->r28));
/*802110D4 0020DED4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B3020 @ Get_MemoryOffset_HighBit);
/*802110D8 0020DED8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804B3020 @ Get_MemoryOffset_LowBit);
/*802110DC 0020DEDC*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*802110E0 0020DEE0*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r4, 31);
/*802110E4 0020DEE4*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0x3);
/*802110E8 0020DEE8*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r3);
/*802110EC 0020DEEC*/ PPC::Runtime::ASM::slwi(context->r3, context->r5, 2);
/*802110F0 0020DEF0*/ PPC::Runtime::ASM::add(context->r29, context->r0, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_802110F4, 0x802110F4) //this is a jump label
/*802110F4 0020DEF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802110F8 0020DEF8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*802110FC 0020DEFC*/ PPC::Runtime::ASM::bne(.L_80211110);
/*80211100 0020DF00*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80211104 0020DF04*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80211108 0020DF08*/ PPC::Runtime::ASM::bl(fn_HSD_DObjClearFlags);
/*8021110C 0020DF0C*/ PPC::Runtime::ASM::b(.L_8021111C);
RUNTIME_PPC_JUMP_LABEL(.L_80211110, 0x80211110) //this is a jump label
/*80211110 0020DF10*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80211114 0020DF14*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80211118 0020DF18*/ PPC::Runtime::ASM::bl(fn_HSD_DObjSetFlags);
RUNTIME_PPC_JUMP_LABEL(.L_8021111C, 0x8021111C) //this is a jump label
/*8021111C 0020DF1C*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*80211120 0020DF20*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80211124 0020DF24*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x6);
/*80211128 0020DF28*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x18);
/*8021112C 0020DF2C*/ PPC::Runtime::ASM::blt(.L_802110F4);
/*80211130 0020DF30*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r28));
/*80211134 0020DF34*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x334, context->r28));
/*80211138 0020DF38*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8021113C 0020DF3C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2ec, context->r28));
/*80211140 0020DF40*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x338, context->r28));
/*80211144 0020DF44*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80211148 0020DF48*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f0, context->r28));
/*8021114C 0020DF4C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r28));
/*80211150 0020DF50*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80211154 0020DF54*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f4, context->r28));
/*80211158 0020DF58*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8021115C 0020DF5C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80211160 0020DF60*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80211164 0020DF64*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80211168 0020DF68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8021116C 0020DF6C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80211170 0020DF70*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80211174 0020DF74*/ PPC::Runtime::ASM::blr();
}