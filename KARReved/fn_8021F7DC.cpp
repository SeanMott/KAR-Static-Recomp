//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80220310.hpp"
#include "fn_8018C824.hpp"
#include "fn_80221398.hpp"
#include "fn_8018C668.hpp"
#include "fn_80221BA8.hpp"
#include "fn_80220B20.hpp"
#include "fn_80220750.hpp"
#include "fn_802212E8.hpp"
#include "fn_802211CC.hpp"
#include "fn_80220AB0.hpp"
#include "fn_80221300.hpp"
#include "fn_80222298.hpp"
#include "fn_80231BDC.hpp"



void fn_8021F7DC(PPC::Runtime::GCContext* context)
{
/*8021F7DC 0021C5DC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8021F7E0 0021C5E0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021F7E4 0021C5E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8021F7E8 0021C5E8*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8021F7EC 0021C5EC*/ PPC::Runtime::ASM::fmr(context->f31, context->f2);
/*8021F7F0 0021C5F0*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8021F7F4 0021C5F4*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*8021F7F8 0021C5F8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8021F7FC 0021C5FC*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8021F800 0021C600*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8021F804 0021C604*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*8021F808 0021C608*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021F80C 0021C60C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8021F810 0021C610*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8021F814 0021C614*/ PPC::Runtime::ASM::bl(fn_80220310);
/*8021F818 0021C618*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r29));
/*8021F81C 0021C61C*/ PPC::Runtime::ASM::bl(fn_8018C824);
/*8021F820 0021C620*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b6, context->r29));
/* 8021F824 0021C624  54 00 EF FF */ extrwi. context->r0 , context->r0 , 1 , 28
/*8021F828 0021C628*/ PPC::Runtime::ASM::beq(.L_8021F834);
/*8021F82C 0021C62C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8021F830 0021C630*/ PPC::Runtime::ASM::bl(fn_80221398);
RUNTIME_PPC_JUMP_LABEL(.L_8021F834, 0x8021F834) //this is a jump label
/*8021F834 0021C634*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r30, 0, 29, 29);
/*8021F838 0021C638*/ PPC::Runtime::ASM::bne(.L_8021F85C);
/*8021F83C 0021C63C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r29));
/*8021F840 0021C640*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r3));
/*8021F844 0021C644*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8021F848 0021C648*/ PPC::Runtime::ASM::beq(.L_8021F854);
/*8021F84C 0021C64C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8021F850 0021C650*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8021F854, 0x8021F854) //this is a jump label
/*8021F854 0021C654*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r29));
/*8021F858 0021C658*/ PPC::Runtime::ASM::bl(fn_8018C668);
RUNTIME_PPC_JUMP_LABEL(.L_8021F85C, 0x8021F85C) //this is a jump label
/* 8021F85C 0021C65C  57 C0 07 FF */ clrlwi. context->r0 , context->r30 , 31
/*8021F860 0021C660*/ PPC::Runtime::ASM::bne(.L_8021F86C);
/*8021F864 0021C664*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8021F868 0021C668*/ PPC::Runtime::ASM::bl(fn_80221BA8);
RUNTIME_PPC_JUMP_LABEL(.L_8021F86C, 0x8021F86C) //this is a jump label
/*8021F86C 0021C66C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b6, context->r29));
/*8021F870 0021C670*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8021F874 0021C674*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*8021F878 0021C678*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b6, context->r29));
/*8021F87C 0021C67C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*8021F880 0021C680*/ PPC::Runtime::ASM::cmpw(context->r31, context->r0);
/*8021F884 0021C684*/ PPC::Runtime::ASM::blt(.L_8021F89C);
/*8021F888 0021C688*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r31);
/*8021F88C 0021C68C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*8021F890 0021C690*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x18);
/*8021F894 0021C694*/ PPC::Runtime::ASM::add(context->r31, context->r3, context->r0);
/*8021F898 0021C698*/ PPC::Runtime::ASM::b(.L_8021F8A8);
RUNTIME_PPC_JUMP_LABEL(.L_8021F89C, 0x8021F89C) //this is a jump label
/*8021F89C 0021C69C*/ PPC::Runtime::ASM::mulli(context->r0, context->r31, 0x18);
/*8021F8A0 0021C6A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*8021F8A4 0021C6A4*/ PPC::Runtime::ASM::add(context->r31, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8021F8A8, 0x8021F8A8) //this is a jump label
/*8021F8A8 0021C6A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8021F8AC 0021C6AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*8021F8B0 0021C6B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*8021F8B4 0021C6B4*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8021F8B8 0021C6B8*/ PPC::Runtime::ASM::beq(.L_8021F904);
/*8021F8BC 0021C6BC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*8021F8C0 0021C6C0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 4);
/*8021F8C4 0021C6C4*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*8021F8C8 0021C6C8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8021F8CC 0021C6CC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8021F8D0 0021C6D0*/ PPC::Runtime::ASM::fmr(context->f2, context->f31);
/*8021F8D4 0021C6D4*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*8021F8D8 0021C6D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*8021F8DC 0021C6DC*/ PPC::Runtime::ASM::bl(fn_80220B20);
/*8021F8E0 0021C6E0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8021F8E4 0021C6E4*/ PPC::Runtime::ASM::bl(fn_80220750);
/*8021F8E8 0021C6E8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*8021F8EC 0021C6EC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8021F8F0 0021C6F0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8021F8F4 0021C6F4*/ PPC::Runtime::ASM::bl(fn_802212E8);
/*8021F8F8 0021C6F8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8021F8FC 0021C6FC*/ PPC::Runtime::ASM::bl(fn_802211CC);
/*8021F900 0021C700*/ PPC::Runtime::ASM::b(.L_8021F91C);
RUNTIME_PPC_JUMP_LABEL(.L_8021F904, 0x8021F904) //this is a jump label
/*8021F904 0021C704*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8021F908 0021C708*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8021F90C 0021C70C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*8021F910 0021C710*/ PPC::Runtime::ASM::bl(fn_80220AB0);
/*8021F914 0021C714*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8021F918 0021C718*/ PPC::Runtime::ASM::bl(fn_80221300);
RUNTIME_PPC_JUMP_LABEL(.L_8021F91C, 0x8021F91C) //this is a jump label
/*8021F91C 0021C71C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17c, context->r29));
/*8021F920 0021C720*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8021F924 0021C724*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8021F928 0021C728*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021F92C 0021C72C*/ PPC::Runtime::ASM::bl(fn_80222298);
/*8021F930 0021C730*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r30, 0, 27, 27);
/*8021F934 0021C734*/ PPC::Runtime::ASM::bne(.L_8021F950);
/*8021F938 0021C738*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021F93C 0021C73C*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x17c);
/*8021F940 0021C740*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8021F944 0021C744*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8021F948 0021C748*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*8021F94C 0021C74C*/ PPC::Runtime::ASM::bl(fn_80231BDC);
RUNTIME_PPC_JUMP_LABEL(.L_8021F950, 0x8021F950) //this is a jump label
/*8021F950 0021C750*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8021F954 0021C754*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8021F958 0021C758*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x150, context->r29));
/*8021F95C 0021C75C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8021F960 0021C760*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x154, context->r29));
/*8021F964 0021C764*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8021F968 0021C768*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158, context->r29));
/*8021F96C 0021C76C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8021F970 0021C770*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15c, context->r29));
/*8021F974 0021C774*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x160, context->r29));
/*8021F978 0021C778*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x164, context->r29));
/*8021F97C 0021C77C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x168, context->r29));
/*8021F980 0021C780*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16c, context->r29));
/*8021F984 0021C784*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r29));
/*8021F988 0021C788*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x174, context->r29));
/*8021F98C 0021C78C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x178, context->r29));
/*8021F990 0021C790*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8021F994 0021C794*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8021F998 0021C798*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8021F99C 0021C79C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8021F9A0 0021C7A0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021F9A4 0021C7A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8021F9A8 0021C7A8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021F9AC 0021C7AC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8021F9B0 0021C7B0*/ PPC::Runtime::ASM::blr();
}