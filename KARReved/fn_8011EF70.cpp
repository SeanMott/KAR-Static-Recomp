//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80112044.hpp"
#include "fn_80112058.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"
#include "fn_menu_getCurrentMenuID.hpp"
#include "fn_renderPauseHUD_renderStatChart.hpp"
#include "fn_getTrialFlag.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"



void fn_8011EF70(PPC::Runtime::GCContext* context)
{
/*8011EF70 0011BD70*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8011EF74 0011BD74*/ PPC::Runtime::ASM::mflr(context->r0);
/*8011EF78 0011BD78*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1070 @ Get_MemoryOffset_HighBit);
/*8011EF7C 0011BD7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8011EF80 0011BD80*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8011EF84 0011BD84*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8011EF88 0011BD88*/ PPC::Runtime::ASM::addi(context->r30, context->r3, MemoryOffset_1070 @ Get_MemoryOffset_LowBit);
/*8011EF8C 0011BD8C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011EF90 0011BD90*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8011EF94 0011BD94*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8011EF98 0011BD98*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x280);
/*8011EF9C 0011BD9C*/ PPC::Runtime::ASM::bl(fn_80112058);
/*8011EFA0 0011BDA0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8011EFA4 0011BDA4*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*8011EFA8 0011BDA8*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8011EFAC 0011BDAC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8011EFB0 0011BDB0*/ PPC::Runtime::ASM::beq(.L_8011EFE0);
/*8011EFB4 0011BDB4*/ PPC::Runtime::ASM::bge(.L_8011EFFC);
/*8011EFB8 0011BDB8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8011EFBC 0011BDBC*/ PPC::Runtime::ASM::bge(.L_8011EFC4);
/*8011EFC0 0011BDC0*/ PPC::Runtime::ASM::b(.L_8011EFFC);
RUNTIME_PPC_JUMP_LABEL(.L_8011EFC4, 0x8011EFC4) //this is a jump label
/*8011EFC4 0011BDC4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8011EFC8 0011BDC8*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8011EFCC 0011BDCC*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x0);
/*8011EFD0 0011BDD0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8011EFD4 0011BDD4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8011EFD8 0011BDD8*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8011EFDC 0011BDDC*/ PPC::Runtime::ASM::b(.L_8011F014);
RUNTIME_PPC_JUMP_LABEL(.L_8011EFE0, 0x8011EFE0) //this is a jump label
/*8011EFE0 0011BDE0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8011EFE4 0011BDE4*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x4);
/*8011EFE8 0011BDE8*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x18);
/*8011EFEC 0011BDEC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8011EFF0 0011BDF0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8011EFF4 0011BDF4*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8011EFF8 0011BDF8*/ PPC::Runtime::ASM::b(.L_8011F014);
RUNTIME_PPC_JUMP_LABEL(.L_8011EFFC, 0x8011EFFC) //this is a jump label
/*8011EFFC 0011BDFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8011F000 0011BE00*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x8);
/*8011F004 0011BE04*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x30);
/*8011F008 0011BE08*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8011F00C 0011BE0C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8011F010 0011BE10*/ PPC::Runtime::ASM::bl(fn_80059520);
RUNTIME_PPC_JUMP_LABEL(.L_8011F014, 0x8011F014) //this is a jump label
/*8011F014 0011BE14*/ PPC::Runtime::ASM::bl(fn_menu_getCurrentMenuID);
/*8011F018 0011BE18*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8011F01C 0011BE1C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x6);
/*8011F020 0011BE20*/ PPC::Runtime::ASM::bne(.L_8011F040);
/*8011F024 0011BE24*/ PPC::Runtime::ASM::bl(fn_renderPauseHUD_renderStatChart);
/*8011F028 0011BE28*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8011F02C 0011BE2C*/ PPC::Runtime::ASM::bne(.L_8011F040);
/*8011F030 0011BE30*/ PPC::Runtime::ASM::bl(fn_getTrialFlag);
/*8011F034 0011BE34*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8011F038 0011BE38*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8011F03C 0011BE3C*/ PPC::Runtime::ASM::beq(.L_8011F0F8);
RUNTIME_PPC_JUMP_LABEL(.L_8011F040, 0x8011F040) //this is a jump label
/*8011F040 0011BE40*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*8011F044 0011BE44*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8011F048 0011BE48*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8011F04C 0011BE4C*/ PPC::Runtime::ASM::beq(.L_8011F094);
/*8011F050 0011BE50*/ PPC::Runtime::ASM::bge(.L_8011F0C8);
/*8011F054 0011BE54*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8011F058 0011BE58*/ PPC::Runtime::ASM::bge(.L_8011F060);
/*8011F05C 0011BE5C*/ PPC::Runtime::ASM::b(.L_8011F0C8);
RUNTIME_PPC_JUMP_LABEL(.L_8011F060, 0x8011F060) //this is a jump label
/*8011F060 0011BE60*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8011F064 0011BE64*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0xc);
/*8011F068 0011BE68*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x48);
/*8011F06C 0011BE6C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8011F070 0011BE70*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8011F074 0011BE74*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8011F078 0011BE78*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8011F07C 0011BE7C*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x18);
/*8011F080 0011BE80*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x60);
/*8011F084 0011BE84*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8011F088 0011BE88*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8011F08C 0011BE8C*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8011F090 0011BE90*/ PPC::Runtime::ASM::b(.L_8011F0F8);
RUNTIME_PPC_JUMP_LABEL(.L_8011F094, 0x8011F094) //this is a jump label
/*8011F094 0011BE94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8011F098 0011BE98*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x10);
/*8011F09C 0011BE9C*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x78);
/*8011F0A0 0011BEA0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8011F0A4 0011BEA4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8011F0A8 0011BEA8*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8011F0AC 0011BEAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8011F0B0 0011BEB0*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x1c);
/*8011F0B4 0011BEB4*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x90);
/*8011F0B8 0011BEB8*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8011F0BC 0011BEBC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8011F0C0 0011BEC0*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8011F0C4 0011BEC4*/ PPC::Runtime::ASM::b(.L_8011F0F8);
RUNTIME_PPC_JUMP_LABEL(.L_8011F0C8, 0x8011F0C8) //this is a jump label
/*8011F0C8 0011BEC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8011F0CC 0011BECC*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x14);
/*8011F0D0 0011BED0*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0xa8);
/*8011F0D4 0011BED4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8011F0D8 0011BED8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8011F0DC 0011BEDC*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8011F0E0 0011BEE0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8011F0E4 0011BEE4*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x20);
/*8011F0E8 0011BEE8*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0xc0);
/*8011F0EC 0011BEEC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8011F0F0 0011BEF0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8011F0F4 0011BEF4*/ PPC::Runtime::ASM::bl(fn_80059520);
RUNTIME_PPC_JUMP_LABEL(.L_8011F0F8, 0x8011F0F8) //this is a jump label
/*8011F0F8 0011BEF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8011F0FC 0011BEFC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8011F100 0011BF00*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8011F104 0011BF04*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011F108 0011BF08*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8011F10C 0011BF0C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8011F110 0011BF10*/ PPC::Runtime::ASM::blr();
}