//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80246584.hpp"
#include "fn_800D1F3C.hpp"
#include "fn_802464B8.hpp"
#include "fn_800D1F3C.hpp"
#include "fn_800D21F8.hpp"
#include "fn_80246718.hpp"
#include "fn_801CAA40.hpp"
#include "fn_80230E78.hpp"
#include "fn_800D21D0.hpp"
#include "fn_801CAA40.hpp"
#include "fn_8027A2D0.hpp"
#include "fn_801CAA40.hpp"
#include "fn_802305B0.hpp"
#include "fn_800D1FF0.hpp"
#include "fn_801CBE34.hpp"
#include "fn_801DD17C.hpp"
#include "fn_80236C40.hpp"
#include "fn_801CAA40.hpp"
#include "fn_80230E44.hpp"
#include "fn_801CAA40.hpp"
#include "fn_802305B0.hpp"



void fn_801CF60C(PPC::Runtime::GCContext* context)
{
/*801CF60C 001CC40C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801CF610 001CC410*/ PPC::Runtime::ASM::mflr(context->r0);
/*801CF614 001CC414*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801CF618 001CC418*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801CF61C 001CC41C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801CF620 001CC420*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801CF624 001CC424*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801CF628 001CC428*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801CF62C 001CC42C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r3));
/*801CF630 001CC430*/ PPC::Runtime::ASM::bl(fn_80246584);
/*801CF634 001CC434*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801CF638 001CC438*/ PPC::Runtime::ASM::bl(fn_800D1F3C);
/*801CF63C 001CC43C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801CF640 001CC440*/ PPC::Runtime::ASM::beq(.L_801CF670);
/*801CF644 001CC444*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
/* 801CF648 001CC448  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*801CF64C 001CC44C*/ PPC::Runtime::ASM::beq(.L_801CF674);
/*801CF650 001CC450*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801CF654 001CC454*/ PPC::Runtime::ASM::bl(fn_802464B8);
/*801CF658 001CC458*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801CF65C 001CC45C*/ PPC::Runtime::ASM::bl(fn_800D1F3C);
/*801CF660 001CC460*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801CF664 001CC464*/ PPC::Runtime::ASM::bne(.L_801CF674);
/*801CF668 001CC468*/ PPC::Runtime::ASM::li(context->r29, 0x2);
/*801CF66C 001CC46C*/ PPC::Runtime::ASM::b(.L_801CF674);
RUNTIME_PPC_JUMP_LABEL(.L_801CF670, 0x801CF670) //this is a jump label
/*801CF670 001CC470*/ PPC::Runtime::ASM::li(context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801CF674, 0x801CF674) //this is a jump label
/*801CF674 001CC474*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*801CF678 001CC478*/ PPC::Runtime::ASM::beq(.L_801CF82C);
/*801CF67C 001CC47C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1A30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CF680 001CC480*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CF684 001CC484*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7b8, context->r31));
/*801CF688 001CC488*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*801CF68C 001CC48C*/ PPC::Runtime::ASM::beq(.L_801CF824);
/*801CF690 001CC490*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x1);
/*801CF694 001CC494*/ PPC::Runtime::ASM::bne(.L_801CF704);
/*801CF698 001CC498*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801CF69C 001CC49C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x7c0);
/*801CF6A0 001CC4A0*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x7bc);
/*801CF6A4 001CC4A4*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0xc);
/*801CF6A8 001CC4A8*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x7cc);
/*801CF6AC 001CC4AC*/ PPC::Runtime::ASM::bl(fn_800D21F8);
/*801CF6B0 001CC4B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801CF6B4 001CC4B4*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*801CF6B8 001CC4B8*/ PPC::Runtime::ASM::bl(fn_80246718);
/*801CF6BC 001CC4BC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801CF6C0 001CC4C0*/ PPC::Runtime::ASM::bl(fn_801CAA40);
/*801CF6C4 001CC4C4*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*801CF6C8 001CC4C8*/ PPC::Runtime::ASM::bl(fn_80230E78);
/*801CF6CC 001CC4CC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801CF6D0 001CC4D0*/ PPC::Runtime::ASM::bl(fn_800D21D0);
/*801CF6D4 001CC4D4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*801CF6D8 001CC4D8*/ PPC::Runtime::ASM::bne(.L_801CF6F0);
/*801CF6DC 001CC4DC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801CF6E0 001CC4E0*/ PPC::Runtime::ASM::bl(fn_801CAA40);
/*801CF6E4 001CC4E4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x5);
/*801CF6E8 001CC4E8*/ PPC::Runtime::ASM::beq(.L_801CF6F0);
/*801CF6EC 001CC4EC*/ PPC::Runtime::ASM::bl(fn_8027A2D0);
RUNTIME_PPC_JUMP_LABEL(.L_801CF6F0, 0x801CF6F0) //this is a jump label
/*801CF6F0 001CC4F0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801CF6F4 001CC4F4*/ PPC::Runtime::ASM::bl(fn_801CAA40);
/*801CF6F8 001CC4F8*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*801CF6FC 001CC4FC*/ PPC::Runtime::ASM::bl(fn_802305B0);
/*801CF700 001CC500*/ PPC::Runtime::ASM::b(.L_801CF784);
RUNTIME_PPC_JUMP_LABEL(.L_801CF704, 0x801CF704) //this is a jump label
/*801CF704 001CC504*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801CF708 001CC508*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x7c0);
/*801CF70C 001CC50C*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x7bc);
/*801CF710 001CC510*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0xc);
/*801CF714 001CC514*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x7cc);
/*801CF718 001CC518*/ PPC::Runtime::ASM::bl(fn_800D1FF0);
/*801CF71C 001CC51C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801CF720 001CC520*/ PPC::Runtime::ASM::bl(fn_801CBE34);
/*801CF724 001CC524*/ PPC::Runtime::ASM::lis(context->r4, 0x2);
/*801CF728 001CC528*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1A44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CF72C 001CC52C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801CF730 001CC530*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0xa8);
/*801CF734 001CC534*/ PPC::Runtime::ASM::bl(fn_801DD17C);
/*801CF738 001CC538*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1A44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CF73C 001CC53C*/ PPC::Runtime::ASM::lis(context->r3, 0x4);
/*801CF740 001CC540*/ PPC::Runtime::ASM::subi(context->r4, context->r3, 0x5652);
/*801CF744 001CC544*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x8);
/*801CF748 001CC548*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801CF74C 001CC54C*/ PPC::Runtime::ASM::li(context->r6, 0xd5);
/*801CF750 001CC550*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r31));
/*801CF754 001CC554*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801CF758 001CC558*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x69c, context->r31));
/*801CF75C 001CC55C*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*801CF760 001CC560*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801CF764 001CC564*/ PPC::Runtime::ASM::bl(fn_80236C40);
/*801CF768 001CC568*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801CF76C 001CC56C*/ PPC::Runtime::ASM::bl(fn_801CAA40);
/*801CF770 001CC570*/ PPC::Runtime::ASM::bl(fn_80230E44);
/*801CF774 001CC574*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801CF778 001CC578*/ PPC::Runtime::ASM::bl(fn_801CAA40);
/*801CF77C 001CC57C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*801CF780 001CC580*/ PPC::Runtime::ASM::bl(fn_802305B0);
RUNTIME_PPC_JUMP_LABEL(.L_801CF784, 0x801CF784) //this is a jump label
/*801CF784 001CC584*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1A30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CF788 001CC588*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c0, context->r31));
/*801CF78C 001CC58C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801CF790 001CC590*/ PPC::Runtime::ASM::bne(.L_801CF7C8);
/*801CF794 001CC594*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c4, context->r31));
/*801CF798 001CC598*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801CF79C 001CC59C*/ PPC::Runtime::ASM::bne(.L_801CF7C8);
/*801CF7A0 001CC5A0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c8, context->r31));
/*801CF7A4 001CC5A4*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801CF7A8 001CC5A8*/ PPC::Runtime::ASM::bne(.L_801CF7C8);
/*801CF7AC 001CC5AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x418, context->r31));
/*801CF7B0 001CC5B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x41c, context->r31));
/*801CF7B4 001CC5B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x420, context->r31));
/*801CF7B8 001CC5B8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801CF7BC 001CC5BC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CF7C0 001CC5C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801CF7C4 001CC5C4*/ PPC::Runtime::ASM::b(.L_801CF7E0);
RUNTIME_PPC_JUMP_LABEL(.L_801CF7C8, 0x801CF7C8) //this is a jump label
/*801CF7C8 001CC5C8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c0, context->r31));
/*801CF7CC 001CC5CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c4, context->r31));
/*801CF7D0 001CC5D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c8, context->r31));
/*801CF7D4 001CC5D4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801CF7D8 001CC5D8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CF7DC 001CC5DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_801CF7E0, 0x801CF7E0) //this is a jump label
/*801CF7E0 001CC5E0*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CF7E4 001CC5E4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801CF7E8 001CC5E8*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CF7EC 001CC5EC*/ PPC::Runtime::ASM::fmuls(context->f2, context->f0, context->f4);
/*801CF7F0 001CC5F0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*801CF7F4 001CC5F4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801CF7F8 001CC5F8*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f4);
/*801CF7FC 001CC5FC*/ PPC::Runtime::ASM::fadds(context->f2, context->f2, context->f1);
/*801CF800 001CC600*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f4);
/*801CF804 001CC604*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*801CF808 001CC608*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*801CF80C 001CC60C*/ PPC::Runtime::ASM::fadds(context->f0, context->f3, context->f0);
/*801CF810 001CC610*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*801CF814 001CC614*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
/*801CF818 001CC618*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801CF81C 001CC61C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
/*801CF820 001CC620*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7b8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801CF824, 0x801CF824) //this is a jump label
/*801CF824 001CC624*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CF828 001CC628*/ PPC::Runtime::ASM::b(.L_801CF838);
RUNTIME_PPC_JUMP_LABEL(.L_801CF82C, 0x801CF82C) //this is a jump label
/*801CF82C 001CC62C*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*801CF830 001CC630*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1A30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CF834 001CC634*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7b8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801CF838, 0x801CF838) //this is a jump label
/*801CF838 001CC638*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801CF83C 001CC63C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801CF840 001CC640*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801CF844 001CC644*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801CF848 001CC648*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801CF84C 001CC64C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801CF850 001CC650*/ PPC::Runtime::ASM::blr();
}