//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250E70.hpp"
#include "fn_80252248.hpp"
#include "fn_8024EE58.hpp"
#include "fn_802524AC.hpp"
#include "fn_80252504.hpp"
#include "fn_80252824.hpp"
#include "fn_80252174.hpp"
#include "fn_80054414.hpp"
#include "fn_8018C3B4.hpp"
#include "fn_8018CB04.hpp"
#include "fn_80252B48.hpp"



void fn_802510A8(PPC::Runtime::GCContext* context)
{
/*802510A8 0024DEA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802510AC 0024DEAC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802510B0 0024DEB0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2CA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802510B4 0024DEB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802510B8 0024DEB8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802510BC 0024DEBC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802510C0 0024DEC0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802510C4 0024DEC4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*802510C8 0024DEC8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r31));
/*802510CC 0024DECC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802510D0 0024DED0*/ PPC::Runtime::ASM::bge(.L_802510F4);
/*802510D4 0024DED4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*802510D8 0024DED8*/ PPC::Runtime::ASM::bl(fn_80250E70);
/*802510DC 0024DEDC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r31));
/*802510E0 0024DEE0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802510E4 0024DEE4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r31));
/*802510E8 0024DEE8*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*802510EC 0024DEEC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r31));
/*802510F0 0024DEF0*/ PPC::Runtime::ASM::b(.L_802511AC);
RUNTIME_PPC_JUMP_LABEL(.L_802510F4, 0x802510F4) //this is a jump label
/*802510F4 0024DEF4*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055DD58 @ Get_MemoryOffset_HighBit);
/*802510F8 0024DEF8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r31));
/*802510FC 0024DEFC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055DD58 @ Get_MemoryOffset_LowBit);
/*80251100 0024DF00*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
/*80251104 0024DF04*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055DD84 @ Get_MemoryOffset_HighBit);
/*80251108 0024DF08*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*8025110C 0024DF0C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055DD84 @ Get_MemoryOffset_LowBit);
/*80251110 0024DF10*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
/*80251114 0024DF14*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055DDB0 @ Get_MemoryOffset_HighBit);
/*80251118 0024DF18*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r31));
/*8025111C 0024DF1C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055DDB0 @ Get_MemoryOffset_LowBit);
/*80251120 0024DF20*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
/*80251124 0024DF24*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80251128 0024DF28*/ PPC::Runtime::ASM::bl(fn_80429CB0);
/*8025112C 0024DF2C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80251130 0024DF30*/ PPC::Runtime::ASM::bl(fn_80252248);
/*80251134 0024DF34*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80251138 0024DF38*/ PPC::Runtime::ASM::bl(fn_8024EE58);
/*8025113C 0024DF3C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80251140 0024DF40*/ PPC::Runtime::ASM::bl(fn_802524AC);
/*80251144 0024DF44*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80251148 0024DF48*/ PPC::Runtime::ASM::bl(fn_80252504);
/*8025114C 0024DF4C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80251150 0024DF50*/ PPC::Runtime::ASM::bl(fn_80252824);
/*80251154 0024DF54*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80251158 0024DF58*/ PPC::Runtime::ASM::bl(fn_80252174);
/*8025115C 0024DF5C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r31));
/*80251160 0024DF60*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x100);
/*80251164 0024DF64*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r31));
/*80251168 0024DF68*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x10c);
/*8025116C 0024DF6C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80251170 0024DF70*/ PPC::Runtime::ASM::addi(context->r6, context->r31, 0xdc);
/*80251174 0024DF74*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*80251178 0024DF78*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8025117C 0024DF7C*/ PPC::Runtime::ASM::bl(fn_80054414);
/*80251180 0024DF80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r31));
/*80251184 0024DF84*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80251188 0024DF88*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r31));
/*8025118C 0024DF8C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80251190 0024DF90*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r31));
/*80251194 0024DF94*/ PPC::Runtime::ASM::bl(fn_8018C3B4);
/*80251198 0024DF98*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r31));
/*8025119C 0024DF9C*/ PPC::Runtime::ASM::bl(fn_8018CB04);
/*802511A0 0024DFA0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802511A4 0024DFA4*/ PPC::Runtime::ASM::bl(fn_80252B48);
/*802511A8 0024DFA8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802511AC, 0x802511AC) //this is a jump label
/*802511AC 0024DFAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802511B0 0024DFB0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802511B4 0024DFB4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802511B8 0024DFB8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802511BC 0024DFBC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802511C0 0024DFC0*/ PPC::Runtime::ASM::blr();
}