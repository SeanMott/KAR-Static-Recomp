//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800FA2A0.hpp"
#include "fn_800FED20.hpp"
#include "fn_80103654.hpp"
#include "fn_80103654.hpp"
#include "fn_80103654.hpp"
#include "fn_80105DB8.hpp"
#include "fn_80105DB8.hpp"
#include "fn_80105DB8.hpp"
#include "fn_80105DB8.hpp"
#include "fn_80105DB8.hpp"
#include "fn_80107120.hpp"
#include "fn_80107120.hpp"
#include "fn_80107120.hpp"
#include "fn_80107120.hpp"
#include "fn_80107120.hpp"
#include "fn_80107120.hpp"
#include "fn_80107120.hpp"
#include "fn_80107120.hpp"
#include "fn_80107120.hpp"
#include "fn_80107120.hpp"
#include "fn_80107120.hpp"
#include "fn_80107120.hpp"
#include "fn_80107120.hpp"
#include "fn_80107120.hpp"
#include "fn_80107120.hpp"
#include "fn_80107120.hpp"
#include "fn_80107120.hpp"
#include "fn_80107120.hpp"



void fn_8010EA40(PPC::Runtime::GCContext* context)
{
/*8010EA40 0010B840*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8010EA44 0010B844*/ PPC::Runtime::ASM::mflr(context->r0);
/*8010EA48 0010B848*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8010EA4C 0010B84C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010EA50 0010B850*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8010EA54 0010B854*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8010EA58 0010B858*/ PPC::Runtime::ASM::bl(fn_800FA2A0);
/*8010EA5C 0010B85C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EA60 0010B860*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8010EA64 0010B864*/ PPC::Runtime::ASM::bl(fn_800FED20);
/*8010EA68 0010B868*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EA6C 0010B86C*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8010EA70 0010B870*/ PPC::Runtime::ASM::bl(fn_80103654);
/*8010EA74 0010B874*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EA78 0010B878*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8010EA7C 0010B87C*/ PPC::Runtime::ASM::bl(fn_80103654);
/*8010EA80 0010B880*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EA84 0010B884*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8010EA88 0010B888*/ PPC::Runtime::ASM::bl(fn_80103654);
/*8010EA8C 0010B88C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EA90 0010B890*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8010EA94 0010B894*/ PPC::Runtime::ASM::bl(fn_80105DB8);
/*8010EA98 0010B898*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EA9C 0010B89C*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*8010EAA0 0010B8A0*/ PPC::Runtime::ASM::bl(fn_80105DB8);
/*8010EAA4 0010B8A4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EAA8 0010B8A8*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8010EAAC 0010B8AC*/ PPC::Runtime::ASM::bl(fn_80105DB8);
/*8010EAB0 0010B8B0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EAB4 0010B8B4*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*8010EAB8 0010B8B8*/ PPC::Runtime::ASM::bl(fn_80105DB8);
/*8010EABC 0010B8BC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EAC0 0010B8C0*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*8010EAC4 0010B8C4*/ PPC::Runtime::ASM::bl(fn_80105DB8);
/*8010EAC8 0010B8C8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EACC 0010B8CC*/ PPC::Runtime::ASM::li(context->r4, 0xa);
/*8010EAD0 0010B8D0*/ PPC::Runtime::ASM::bl(fn_80107120);
/*8010EAD4 0010B8D4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EAD8 0010B8D8*/ PPC::Runtime::ASM::li(context->r4, 0xb);
/*8010EADC 0010B8DC*/ PPC::Runtime::ASM::bl(fn_80107120);
/*8010EAE0 0010B8E0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EAE4 0010B8E4*/ PPC::Runtime::ASM::li(context->r4, 0xc);
/*8010EAE8 0010B8E8*/ PPC::Runtime::ASM::bl(fn_80107120);
/*8010EAEC 0010B8EC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EAF0 0010B8F0*/ PPC::Runtime::ASM::li(context->r4, 0xd);
/*8010EAF4 0010B8F4*/ PPC::Runtime::ASM::bl(fn_80107120);
/*8010EAF8 0010B8F8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EAFC 0010B8FC*/ PPC::Runtime::ASM::li(context->r4, 0xe);
/*8010EB00 0010B900*/ PPC::Runtime::ASM::bl(fn_80107120);
/*8010EB04 0010B904*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EB08 0010B908*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*8010EB0C 0010B90C*/ PPC::Runtime::ASM::bl(fn_80107120);
/*8010EB10 0010B910*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EB14 0010B914*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8010EB18 0010B918*/ PPC::Runtime::ASM::bl(fn_80107120);
/*8010EB1C 0010B91C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EB20 0010B920*/ PPC::Runtime::ASM::li(context->r4, 0x11);
/*8010EB24 0010B924*/ PPC::Runtime::ASM::bl(fn_80107120);
/*8010EB28 0010B928*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EB2C 0010B92C*/ PPC::Runtime::ASM::li(context->r4, 0x12);
/*8010EB30 0010B930*/ PPC::Runtime::ASM::bl(fn_80107120);
/*8010EB34 0010B934*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EB38 0010B938*/ PPC::Runtime::ASM::li(context->r4, 0x13);
/*8010EB3C 0010B93C*/ PPC::Runtime::ASM::bl(fn_80107120);
/*8010EB40 0010B940*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EB44 0010B944*/ PPC::Runtime::ASM::li(context->r4, 0x14);
/*8010EB48 0010B948*/ PPC::Runtime::ASM::bl(fn_80107120);
/*8010EB4C 0010B94C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EB50 0010B950*/ PPC::Runtime::ASM::li(context->r4, 0x15);
/*8010EB54 0010B954*/ PPC::Runtime::ASM::bl(fn_80107120);
/*8010EB58 0010B958*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EB5C 0010B95C*/ PPC::Runtime::ASM::li(context->r4, 0x16);
/*8010EB60 0010B960*/ PPC::Runtime::ASM::bl(fn_80107120);
/*8010EB64 0010B964*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EB68 0010B968*/ PPC::Runtime::ASM::li(context->r4, 0x17);
/*8010EB6C 0010B96C*/ PPC::Runtime::ASM::bl(fn_80107120);
/*8010EB70 0010B970*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EB74 0010B974*/ PPC::Runtime::ASM::li(context->r4, 0x18);
/*8010EB78 0010B978*/ PPC::Runtime::ASM::bl(fn_80107120);
/*8010EB7C 0010B97C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EB80 0010B980*/ PPC::Runtime::ASM::li(context->r4, 0x19);
/*8010EB84 0010B984*/ PPC::Runtime::ASM::bl(fn_80107120);
/*8010EB88 0010B988*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EB8C 0010B98C*/ PPC::Runtime::ASM::li(context->r4, 0x1a);
/*8010EB90 0010B990*/ PPC::Runtime::ASM::bl(fn_80107120);
/*8010EB94 0010B994*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010EB98 0010B998*/ PPC::Runtime::ASM::li(context->r4, 0x1b);
/*8010EB9C 0010B99C*/ PPC::Runtime::ASM::bl(fn_80107120);
/*8010EBA0 0010B9A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010EBA4 0010B9A4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8010EBA8 0010B9A8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010EBAC 0010B9AC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8010EBB0 0010B9B0*/ PPC::Runtime::ASM::blr();
}