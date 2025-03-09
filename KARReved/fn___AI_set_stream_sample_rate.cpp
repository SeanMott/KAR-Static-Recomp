//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_AIGetStreamSampleRate.hpp"
#include "fn_AIGetStreamPlayState_2.hpp"
#include "fn_AIGetStreamPlayState_3.hpp"
#include "fn_AISetStreamVolRight.hpp"
#include "fn_AISetStreamVolLeft.hpp"
#include "OSDisableInterrupts.hpp"
#include "fn___AI_SRC_INIT.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn_AISetStreamPlayState.hpp"
#include "fn_AISetStreamVolLeft.hpp"
#include "fn_AISetStreamVolRight.hpp"



void fn___AI_set_stream_sample_rate(PPC::Runtime::GCContext* context)
{
/*803DF92C 003DC72C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803DF930 003DC730*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803DF934 003DC734*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*803DF938 003DC738*/ PPC::Runtime::ASM::stmw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803DF93C 003DC73C*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*803DF940 003DC740*/ PPC::Runtime::ASM::bl(fn_AIGetStreamSampleRate);
/*803DF944 003DC744*/ PPC::Runtime::ASM::cmplw(context->r25, context->r3);
/*803DF948 003DC748*/ PPC::Runtime::ASM::beq(.L_803DF9EC);
/*803DF94C 003DC74C*/ PPC::Runtime::ASM::lis(context->r31, 0xcc00);
/*803DF950 003DC750*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c00, context->r31));
/*803DF954 003DC754*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 31);
/*803DF958 003DC758*/ PPC::Runtime::ASM::mr(context->r29, context->r0);
/*803DF95C 003DC75C*/ PPC::Runtime::ASM::bl(fn_AIGetStreamPlayState_2);
/*803DF960 003DC760*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*803DF964 003DC764*/ PPC::Runtime::ASM::bl(fn_AIGetStreamPlayState_3);
/*803DF968 003DC768*/ PPC::Runtime::ASM::addi(context->r27, context->r3, 0x0);
/*803DF96C 003DC76C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803DF970 003DC770*/ PPC::Runtime::ASM::bl(fn_AISetStreamVolRight);
/*803DF974 003DC774*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803DF978 003DC778*/ PPC::Runtime::ASM::bl(fn_AISetStreamVolLeft);
/*803DF97C 003DC77C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c00, context->r31));
/*803DF980 003DC780*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c00, context->r31));
/*803DF984 003DC784*/ PPC::Runtime::ASM::rlwinm(context->r26, context->r3, 0, 25, 25);
/*803DF988 003DC788*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 26, 24);
/*803DF98C 003DC78C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c00, context->r31));
/*803DF990 003DC790*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803DF994 003DC794*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803DF998 003DC798*/ PPC::Runtime::ASM::bl(fn___AI_SRC_INIT);
/*803DF99C 003DC79C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c00, context->r31));
/*803DF9A0 003DC7A0*/ PPC::Runtime::ASM::slwi(context->r0, context->r25, 1);
/*803DF9A4 003DC7A4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*803DF9A8 003DC7A8*/ PPC::Runtime::ASM::or(context->r4, context->r4, context->r26);
/*803DF9AC 003DC7AC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c00, context->r31));
/*803DF9B0 003DC7B0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c00, context->r31));
/*803DF9B4 003DC7B4*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r4, 0, 27, 25);
/*803DF9B8 003DC7B8*/ PPC::Runtime::ASM::ori(context->r4, context->r4, 0x20);
/*803DF9BC 003DC7BC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c00, context->r31));
/*803DF9C0 003DC7C0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c00, context->r31));
/*803DF9C4 003DC7C4*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r4, 0, 31, 29);
/*803DF9C8 003DC7C8*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*803DF9CC 003DC7CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c00, context->r31));
/*803DF9D0 003DC7D0*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803DF9D4 003DC7D4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803DF9D8 003DC7D8*/ PPC::Runtime::ASM::bl(fn_AISetStreamPlayState);
/*803DF9DC 003DC7DC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*803DF9E0 003DC7E0*/ PPC::Runtime::ASM::bl(fn_AISetStreamVolLeft);
/*803DF9E4 003DC7E4*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*803DF9E8 003DC7E8*/ PPC::Runtime::ASM::bl(fn_AISetStreamVolRight);
RUNTIME_PPC_JUMP_LABEL(.L_803DF9EC, 0x803DF9EC) //this is a jump label
/*803DF9EC 003DC7EC*/ PPC::Runtime::ASM::lmw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803DF9F0 003DC7F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803DF9F4 003DC7F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*803DF9F8 003DC7F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803DF9FC 003DC7FC*/ PPC::Runtime::ASM::blr();
}