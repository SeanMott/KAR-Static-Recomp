//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800FF50C.hpp"
#include "fn_800FF50C.hpp"
#include "fn_800FF50C.hpp"
#include "fn_800FF50C.hpp"
#include "fn_800FF50C.hpp"
#include "fn_800FF50C.hpp"
#include "fn_800FFD04.hpp"
#include "fn_800FA708.hpp"
#include "fn_800FA708.hpp"
#include "fn_800FA708.hpp"
#include "fn_800FA708.hpp"
#include "fn_800FA708.hpp"
#include "fn_800FA708.hpp"
#include "fn_800FA708.hpp"
#include "fn_800FA708.hpp"
#include "fn_800FA708.hpp"
#include "fn_800FA708.hpp"
#include "fn_80102C40.hpp"
#include "fn_80102C40.hpp"
#include "fn_80102C40.hpp"
#include "fn_80106144.hpp"
#include "fn_80106144.hpp"
#include "fn_80106144.hpp"
#include "fn_80106144.hpp"
#include "fn_801063BC.hpp"
#include "fn_80106824.hpp"
#include "fn_80106824.hpp"
#include "fn_80106824.hpp"
#include "fn_80106824.hpp"
#include "fn_80106824.hpp"
#include "fn_80106824.hpp"
#include "fn_801044CC.hpp"
#include "fn_801044CC.hpp"
#include "fn_801044CC.hpp"
#include "fn_801044CC.hpp"
#include "fn_801044CC.hpp"
#include "fn_801044CC.hpp"
#include "fn_801012C8.hpp"
#include "fn_801012C8.hpp"
#include "fn_801012C8.hpp"
#include "fn_801012C8.hpp"
#include "fn_80100224.hpp"



void fn_8010EDF8(PPC::Runtime::GCContext* context)
{
/*8010EDF8 0010BBF8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8010EDFC 0010BBFC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8010EE00 0010BC00*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8010EE04 0010BC04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010EE08 0010BC08*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8010EE0C 0010BC0C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8010EE10 0010BC10*/ PPC::Runtime::ASM::bl(fn_800FF50C);
/*8010EE14 0010BC14*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EE18 0010BC18*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8010EE1C 0010BC1C*/ PPC::Runtime::ASM::bl(fn_800FF50C);
/*8010EE20 0010BC20*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EE24 0010BC24*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8010EE28 0010BC28*/ PPC::Runtime::ASM::bl(fn_800FF50C);
/*8010EE2C 0010BC2C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EE30 0010BC30*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8010EE34 0010BC34*/ PPC::Runtime::ASM::bl(fn_800FF50C);
/*8010EE38 0010BC38*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EE3C 0010BC3C*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8010EE40 0010BC40*/ PPC::Runtime::ASM::bl(fn_800FF50C);
/*8010EE44 0010BC44*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EE48 0010BC48*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8010EE4C 0010BC4C*/ PPC::Runtime::ASM::bl(fn_800FF50C);
/*8010EE50 0010BC50*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EE54 0010BC54*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*8010EE58 0010BC58*/ PPC::Runtime::ASM::bl(fn_800FFD04);
/*8010EE5C 0010BC5C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EE60 0010BC60*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8010EE64 0010BC64*/ PPC::Runtime::ASM::bl(fn_800FA708);
/*8010EE68 0010BC68*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EE6C 0010BC6C*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*8010EE70 0010BC70*/ PPC::Runtime::ASM::bl(fn_800FA708);
/*8010EE74 0010BC74*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EE78 0010BC78*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*8010EE7C 0010BC7C*/ PPC::Runtime::ASM::bl(fn_800FA708);
/*8010EE80 0010BC80*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EE84 0010BC84*/ PPC::Runtime::ASM::li(context->r4, 0xa);
/*8010EE88 0010BC88*/ PPC::Runtime::ASM::bl(fn_800FA708);
/*8010EE8C 0010BC8C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EE90 0010BC90*/ PPC::Runtime::ASM::li(context->r4, 0xb);
/*8010EE94 0010BC94*/ PPC::Runtime::ASM::bl(fn_800FA708);
/*8010EE98 0010BC98*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EE9C 0010BC9C*/ PPC::Runtime::ASM::li(context->r4, 0xc);
/*8010EEA0 0010BCA0*/ PPC::Runtime::ASM::bl(fn_800FA708);
/*8010EEA4 0010BCA4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EEA8 0010BCA8*/ PPC::Runtime::ASM::li(context->r4, 0xd);
/*8010EEAC 0010BCAC*/ PPC::Runtime::ASM::bl(fn_800FA708);
/*8010EEB0 0010BCB0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EEB4 0010BCB4*/ PPC::Runtime::ASM::li(context->r4, 0xe);
/*8010EEB8 0010BCB8*/ PPC::Runtime::ASM::bl(fn_800FA708);
/*8010EEBC 0010BCBC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EEC0 0010BCC0*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*8010EEC4 0010BCC4*/ PPC::Runtime::ASM::bl(fn_800FA708);
/*8010EEC8 0010BCC8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EECC 0010BCCC*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8010EED0 0010BCD0*/ PPC::Runtime::ASM::bl(fn_800FA708);
/*8010EED4 0010BCD4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EED8 0010BCD8*/ PPC::Runtime::ASM::li(context->r4, 0x11);
/*8010EEDC 0010BCDC*/ PPC::Runtime::ASM::bl(fn_80102C40);
/*8010EEE0 0010BCE0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EEE4 0010BCE4*/ PPC::Runtime::ASM::li(context->r4, 0x12);
/*8010EEE8 0010BCE8*/ PPC::Runtime::ASM::bl(fn_80102C40);
/*8010EEEC 0010BCEC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EEF0 0010BCF0*/ PPC::Runtime::ASM::li(context->r4, 0x13);
/*8010EEF4 0010BCF4*/ PPC::Runtime::ASM::bl(fn_80102C40);
/*8010EEF8 0010BCF8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EEFC 0010BCFC*/ PPC::Runtime::ASM::li(context->r4, 0x14);
/*8010EF00 0010BD00*/ PPC::Runtime::ASM::bl(fn_80106144);
/*8010EF04 0010BD04*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EF08 0010BD08*/ PPC::Runtime::ASM::li(context->r4, 0x15);
/*8010EF0C 0010BD0C*/ PPC::Runtime::ASM::bl(fn_80106144);
/*8010EF10 0010BD10*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EF14 0010BD14*/ PPC::Runtime::ASM::li(context->r4, 0x16);
/*8010EF18 0010BD18*/ PPC::Runtime::ASM::bl(fn_80106144);
/*8010EF1C 0010BD1C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EF20 0010BD20*/ PPC::Runtime::ASM::li(context->r4, 0x17);
/*8010EF24 0010BD24*/ PPC::Runtime::ASM::bl(fn_80106144);
/*8010EF28 0010BD28*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EF2C 0010BD2C*/ PPC::Runtime::ASM::li(context->r4, 0x18);
/*8010EF30 0010BD30*/ PPC::Runtime::ASM::bl(fn_801063BC);
/*8010EF34 0010BD34*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EF38 0010BD38*/ PPC::Runtime::ASM::li(context->r4, 0x19);
/*8010EF3C 0010BD3C*/ PPC::Runtime::ASM::bl(fn_80106824);
/*8010EF40 0010BD40*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EF44 0010BD44*/ PPC::Runtime::ASM::li(context->r4, 0x1a);
/*8010EF48 0010BD48*/ PPC::Runtime::ASM::bl(fn_80106824);
/*8010EF4C 0010BD4C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EF50 0010BD50*/ PPC::Runtime::ASM::li(context->r4, 0x1b);
/*8010EF54 0010BD54*/ PPC::Runtime::ASM::bl(fn_80106824);
/*8010EF58 0010BD58*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EF5C 0010BD5C*/ PPC::Runtime::ASM::li(context->r4, 0x1c);
/*8010EF60 0010BD60*/ PPC::Runtime::ASM::bl(fn_80106824);
/*8010EF64 0010BD64*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EF68 0010BD68*/ PPC::Runtime::ASM::li(context->r4, 0x1d);
/*8010EF6C 0010BD6C*/ PPC::Runtime::ASM::bl(fn_80106824);
/*8010EF70 0010BD70*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EF74 0010BD74*/ PPC::Runtime::ASM::li(context->r4, 0x1e);
/*8010EF78 0010BD78*/ PPC::Runtime::ASM::bl(fn_80106824);
/*8010EF7C 0010BD7C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EF80 0010BD80*/ PPC::Runtime::ASM::li(context->r4, 0x1f);
/*8010EF84 0010BD84*/ PPC::Runtime::ASM::bl(fn_801044CC);
/*8010EF88 0010BD88*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EF8C 0010BD8C*/ PPC::Runtime::ASM::li(context->r4, 0x20);
/*8010EF90 0010BD90*/ PPC::Runtime::ASM::bl(fn_801044CC);
/*8010EF94 0010BD94*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EF98 0010BD98*/ PPC::Runtime::ASM::li(context->r4, 0x21);
/*8010EF9C 0010BD9C*/ PPC::Runtime::ASM::bl(fn_801044CC);
/*8010EFA0 0010BDA0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EFA4 0010BDA4*/ PPC::Runtime::ASM::li(context->r4, 0x22);
/*8010EFA8 0010BDA8*/ PPC::Runtime::ASM::bl(fn_801044CC);
/*8010EFAC 0010BDAC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EFB0 0010BDB0*/ PPC::Runtime::ASM::li(context->r4, 0x23);
/*8010EFB4 0010BDB4*/ PPC::Runtime::ASM::bl(fn_801044CC);
/*8010EFB8 0010BDB8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EFBC 0010BDBC*/ PPC::Runtime::ASM::li(context->r4, 0x24);
/*8010EFC0 0010BDC0*/ PPC::Runtime::ASM::bl(fn_801044CC);
/*8010EFC4 0010BDC4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EFC8 0010BDC8*/ PPC::Runtime::ASM::li(context->r4, 0x25);
/*8010EFCC 0010BDCC*/ PPC::Runtime::ASM::bl(fn_801012C8);
/*8010EFD0 0010BDD0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EFD4 0010BDD4*/ PPC::Runtime::ASM::li(context->r4, 0x26);
/*8010EFD8 0010BDD8*/ PPC::Runtime::ASM::bl(fn_801012C8);
/*8010EFDC 0010BDDC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EFE0 0010BDE0*/ PPC::Runtime::ASM::li(context->r4, 0x27);
/*8010EFE4 0010BDE4*/ PPC::Runtime::ASM::bl(fn_801012C8);
/*8010EFE8 0010BDE8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EFEC 0010BDEC*/ PPC::Runtime::ASM::li(context->r4, 0x28);
/*8010EFF0 0010BDF0*/ PPC::Runtime::ASM::bl(fn_801012C8);
/*8010EFF4 0010BDF4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EFF8 0010BDF8*/ PPC::Runtime::ASM::li(context->r4, 0x29);
/*8010EFFC 0010BDFC*/ PPC::Runtime::ASM::bl(fn_80100224);
/*8010F000 0010BE00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010F004 0010BE04*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8010F008 0010BE08*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010F00C 0010BE0C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8010F010 0010BE10*/ PPC::Runtime::ASM::blr();
}