//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80200D10.hpp"
#include "fn_8020D608.hpp"
#include "fn_8020D608.hpp"
#include "fn_8018CB04.hpp"
#include "fn_802041B0.hpp"
#include "fn_801FD6B0.hpp"
#include "fn_801FC398.hpp"
#include "fn_801FD714.hpp"
#include "fn_8020D608.hpp"
#include "fn_801FD6B0.hpp"
#include "fn_801FC398.hpp"
#include "fn_8018CB28.hpp"
#include "fn_802041B0.hpp"
#include "fn_80204B4C.hpp"



void fn_8021C6A4(PPC::Runtime::GCContext* context)
{
/*8021C6A4 002194A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8021C6A8 002194A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021C6AC 002194AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8021C6B0 002194B0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8021C6B4 002194B4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8021C6B8 002194B8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8021C6BC 002194BC*/ PPC::Runtime::ASM::bl(fn_80200D10);
/*8021C6C0 002194C0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8021C6C4 002194C4*/ PPC::Runtime::ASM::beq(.L_8021C890);
/*8021C6C8 002194C8*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb60, context->r31));
/*8021C6CC 002194CC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8021C6D0 002194D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*8021C6D4 002194D4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8021C6D8 002194D8*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8021C6DC 002194DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8021C6E0 002194E0*/ PPC::Runtime::ASM::blt(.L_8021C6EC);
/*8021C6E4 002194E4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8021C6E8 002194E8*/ PPC::Runtime::ASM::b(.L_8021C77C);
RUNTIME_PPC_JUMP_LABEL(.L_8021C6EC, 0x8021C6EC) //this is a jump label
/*8021C6EC 002194EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8021C6F0 002194F0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8021C6F4 002194F4*/ PPC::Runtime::ASM::bgt(.L_8021C758);
/*8021C6F8 002194F8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x998, context->r31));
/*8021C6FC 002194FC*/ PPC::Runtime::ASM::lis(context->r3, 0x4330);
/*8021C700 00219500*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3b0, context->r31));
/*8021C704 00219504*/ PPC::Runtime::ASM::xoris(context->r4, context->r4, 0x8000);
/*8021C708 00219508*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8021C70C 0021950C*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*8021C710 00219510*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E26F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021C714 00219514*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021C718 00219518*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8021C71C 0021951C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021C720 00219520*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f2);
/*8021C724 00219524*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8021C728 00219528*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8021C72C 0021952C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*8021C730 00219530*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8021C734 00219534*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*8021C738 00219538*/ PPC::Runtime::ASM::bne(.L_8021C77C);
/*8021C73C 0021953C*/ PPC::Runtime::ASM::lis(context->r4, 0x2);
/*8021C740 00219540*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021C744 00219544*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x9f);
/*8021C748 00219548*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8021C74C 0021954C*/ PPC::Runtime::ASM::bl(fn_8020D608);
/*8021C750 00219550*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8021C754 00219554*/ PPC::Runtime::ASM::b(.L_8021C77C);
RUNTIME_PPC_JUMP_LABEL(.L_8021C758, 0x8021C758) //this is a jump label
/*8021C758 00219558*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb48, context->r31));
/*8021C75C 0021955C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*8021C760 00219560*/ PPC::Runtime::ASM::blt(.L_8021C77C);
/*8021C764 00219564*/ PPC::Runtime::ASM::lis(context->r4, 0x2);
/*8021C768 00219568*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021C76C 0021956C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x9f);
/*8021C770 00219570*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8021C774 00219574*/ PPC::Runtime::ASM::bl(fn_8020D608);
/*8021C778 00219578*/ PPC::Runtime::ASM::li(context->r5, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8021C77C, 0x8021C77C) //this is a jump label
/*8021C77C 0021957C*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*8021C780 00219580*/ PPC::Runtime::ASM::beq(.L_8021C804);
/*8021C784 00219584*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8021C788 00219588*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x410, context->r31));
/*8021C78C 0021958C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8021C790 00219590*/ PPC::Runtime::ASM::bl(fn_8018CB04);
/*8021C794 00219594*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8021C798 00219598*/ PPC::Runtime::ASM::bl(fn_802041B0);
/*8021C79C 0021959C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021C7A0 002195A0*/ PPC::Runtime::ASM::bl(fn_801FD6B0);
/*8021C7A4 002195A4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E26F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021C7A8 002195A8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8021C7AC 002195AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r31));
/*8021C7B0 002195B0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021C7B4 002195B4*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8021C7B8 002195B8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E26FC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021C7BC 002195BC*/ PPC::Runtime::ASM::li(context->r4, 0x17);
/*8021C7C0 002195C0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8021C7C4 002195C4*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*8021C7C8 002195C8*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_4 @ Get_MemoryOffset_HighBit);
/*8021C7CC 002195CC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021C7D0 002195D0*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_4 @ Get_MemoryOffset_LowBit);
/*8021C7D4 002195D4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x334);
/*8021C7D8 002195D8*/ PPC::Runtime::ASM::bl(fn_801FD714);
/*8021C7DC 002195DC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8021C7E0 002195E0*/ PPC::Runtime::ASM::lis(context->r4, 0x2);
/*8021C7E4 002195E4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8021C7E8 002195E8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021C7EC 002195EC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e4, context->r31));
/*8021C7F0 002195F0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x9d);
/*8021C7F4 002195F4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8021C7F8 002195F8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb62, context->r31));
/*8021C7FC 002195FC*/ PPC::Runtime::ASM::bl(fn_8020D608);
/*8021C800 00219600*/ PPC::Runtime::ASM::b(.L_8021C890);
RUNTIME_PPC_JUMP_LABEL(.L_8021C804, 0x8021C804) //this is a jump label
/*8021C804 00219604*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8021C808 00219608*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021C80C 0021960C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8021C810 00219610*/ PPC::Runtime::ASM::bl(fn_801FD6B0);
/*8021C814 00219614*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E26F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021C818 00219618*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021C81C 0021961C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E26FC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021C820 00219620*/ PPC::Runtime::ASM::li(context->r4, 0x15);
/*8021C824 00219624*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8021C828 00219628*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8021C82C 0021962C*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*8021C830 00219630*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8021C834 00219634*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x334, context->r31));
/*8021C838 00219638*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8021C83C 0021963C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2ec, context->r31));
/*8021C840 00219640*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x338, context->r31));
/*8021C844 00219644*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8021C848 00219648*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f0, context->r31));
/*8021C84C 0021964C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r31));
/*8021C850 00219650*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8021C854 00219654*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f4, context->r31));
/*8021C858 00219658*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x410, context->r31));
/*8021C85C 0021965C*/ PPC::Runtime::ASM::bl(fn_8018CB28);
/*8021C860 00219660*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8021C864 00219664*/ PPC::Runtime::ASM::bl(fn_802041B0);
/*8021C868 00219668*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r31));
/*8021C86C 0021966C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8021C870 00219670*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 7, 24, 24);
/*8021C874 00219674*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021C878 00219678*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r31));
/*8021C87C 0021967C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8021C880 00219680*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x87c, context->r31));
/*8021C884 00219684*/ PPC::Runtime::ASM::bl(fn_80204B4C);
/*8021C888 00219688*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8021C88C 0021968C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb62, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8021C890, 0x8021C890) //this is a jump label
/*8021C890 00219690*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8021C894 00219694*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8021C898 00219698*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8021C89C 0021969C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021C8A0 002196A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8021C8A4 002196A4*/ PPC::Runtime::ASM::blr();
}