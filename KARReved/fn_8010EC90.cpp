//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800FA2A0.hpp"
#include "fn_800FA610.hpp"
#include "fn_800FE5D4.hpp"
#include "fn_800FE5D4.hpp"
#include "fn_800FE5D4.hpp"
#include "fn_800FE5D4.hpp"
#include "fn_800FE5D4.hpp"
#include "fn_800FE5D4.hpp"
#include "fn_800FE5D4.hpp"
#include "fn_800FE5D4.hpp"
#include "fn_800FEB20.hpp"
#include "fn_80103654.hpp"



void fn_8010EC90(PPC::Runtime::GCContext* context)
{
/*8010EC90 0010BA90*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8010EC94 0010BA94*/ PPC::Runtime::ASM::mflr(context->r0);
/*8010EC98 0010BA98*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8010EC9C 0010BA9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010ECA0 0010BAA0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8010ECA4 0010BAA4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8010ECA8 0010BAA8*/ PPC::Runtime::ASM::bl(fn_800FA2A0);
/*8010ECAC 0010BAAC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010ECB0 0010BAB0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8010ECB4 0010BAB4*/ PPC::Runtime::ASM::bl(fn_800FA610);
/*8010ECB8 0010BAB8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010ECBC 0010BABC*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8010ECC0 0010BAC0*/ PPC::Runtime::ASM::bl(fn_800FE5D4);
/*8010ECC4 0010BAC4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010ECC8 0010BAC8*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8010ECCC 0010BACC*/ PPC::Runtime::ASM::bl(fn_800FE5D4);
/*8010ECD0 0010BAD0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010ECD4 0010BAD4*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8010ECD8 0010BAD8*/ PPC::Runtime::ASM::bl(fn_800FE5D4);
/*8010ECDC 0010BADC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010ECE0 0010BAE0*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8010ECE4 0010BAE4*/ PPC::Runtime::ASM::bl(fn_800FE5D4);
/*8010ECE8 0010BAE8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010ECEC 0010BAEC*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*8010ECF0 0010BAF0*/ PPC::Runtime::ASM::bl(fn_800FE5D4);
/*8010ECF4 0010BAF4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010ECF8 0010BAF8*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8010ECFC 0010BAFC*/ PPC::Runtime::ASM::bl(fn_800FE5D4);
/*8010ED00 0010BB00*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010ED04 0010BB04*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*8010ED08 0010BB08*/ PPC::Runtime::ASM::bl(fn_800FE5D4);
/*8010ED0C 0010BB0C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010ED10 0010BB10*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*8010ED14 0010BB14*/ PPC::Runtime::ASM::bl(fn_800FE5D4);
/*8010ED18 0010BB18*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010ED1C 0010BB1C*/ PPC::Runtime::ASM::li(context->r4, 0xa);
/*8010ED20 0010BB20*/ PPC::Runtime::ASM::bl(fn_800FEB20);
/*8010ED24 0010BB24*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010ED28 0010BB28*/ PPC::Runtime::ASM::li(context->r4, 0xb);
/*8010ED2C 0010BB2C*/ PPC::Runtime::ASM::bl(fn_80103654);
/*8010ED30 0010BB30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010ED34 0010BB34*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8010ED38 0010BB38*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010ED3C 0010BB3C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8010ED40 0010BB40*/ PPC::Runtime::ASM::blr();
}