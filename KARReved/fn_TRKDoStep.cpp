//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_TRKSetBufferPosition.hpp"
#include "memset.hpp"
#include "fn_803C2388.hpp"
#include "fn_803C06A4.hpp"
#include "memset.hpp"
#include "fn_803C2388.hpp"
#include "memset.hpp"
#include "fn_803C2388.hpp"
#include "TRKTargetStopped.hpp"
#include "memset.hpp"
#include "fn_803C2388.hpp"
#include "memset.hpp"
#include "fn_803C2388.hpp"
#include "fn_TRKTargetSingleStep.hpp"
#include "fn_TRKTargetStepOutOfRange.hpp"



void fn_TRKDoStep(PPC::Runtime::GCContext* context)
{
/*803BE974 003BB774*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x160, context->r1));
/*803BE978 003BB778*/ PPC::Runtime::ASM::mflr(context->r0);
/*803BE97C 003BB77C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803BE980 003BB780*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x164, context->r1));
/*803BE984 003BB784*/ PPC::Runtime::ASM::stmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14c, context->r1));
/*803BE988 003BB788*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*803BE98C 003BB78C*/ PPC::Runtime::ASM::bl(fn_TRKSetBufferPosition);
/*803BE990 003BB790*/ PPC::Runtime::ASM::lbz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r27));
/*803BE994 003BB794*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r27));
/*803BE998 003BB798*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x10);
/*803BE99C 003BB79C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r27));
/*803BE9A0 003BB7A0*/ PPC::Runtime::ASM::beq(.L_803BE9CC);
/*803BE9A4 003BB7A4*/ PPC::Runtime::ASM::bge(.L_803BE9C0);
/*803BE9A8 003BB7A8*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x1);
/*803BE9AC 003BB7AC*/ PPC::Runtime::ASM::beq(.L_803BEA14);
/*803BE9B0 003BB7B0*/ PPC::Runtime::ASM::bge(.L_803BEA64);
/*803BE9B4 003BB7B4*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*803BE9B8 003BB7B8*/ PPC::Runtime::ASM::bge(.L_803BE9CC);
/*803BE9BC 003BB7BC*/ PPC::Runtime::ASM::b(.L_803BEA64);
RUNTIME_PPC_JUMP_LABEL(.L_803BE9C0, 0x803BE9C0) //this is a jump label
/*803BE9C0 003BB7C0*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x12);
/*803BE9C4 003BB7C4*/ PPC::Runtime::ASM::bge(.L_803BEA64);
/*803BE9C8 003BB7C8*/ PPC::Runtime::ASM::b(.L_803BEA14);
RUNTIME_PPC_JUMP_LABEL(.L_803BE9CC, 0x803BE9CC) //this is a jump label
/*803BE9CC 003BB7CC*/ PPC::Runtime::ASM::lbz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r27));
/*803BE9D0 003BB7D0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x1);
/*803BE9D4 003BB7D4*/ PPC::Runtime::ASM::bge(.L_803BEAA0);
/*803BE9D8 003BB7D8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x108);
/*803BE9DC 003BB7DC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803BE9E0 003BB7E0*/ PPC::Runtime::ASM::li(context->r5, 0x40);
/*803BE9E4 003BB7E4*/ PPC::Runtime::ASM::bl(memset);
/*803BE9E8 003BB7E8*/ PPC::Runtime::ASM::li(context->r3, 0x80);
/*803BE9EC 003BB7EC*/ PPC::Runtime::ASM::li(context->r5, 0x40);
/*803BE9F0 003BB7F0*/ PPC::Runtime::ASM::li(context->r0, 0x11);
/*803BE9F4 003BB7F4*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10c, context->r1));
/*803BE9F8 003BB7F8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x108);
/*803BE9FC 003BB7FC*/ PPC::Runtime::ASM::li(context->r4, 0x40);
/*803BEA00 003BB800*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r1));
/*803BEA04 003BB804*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r1));
/*803BEA08 003BB808*/ PPC::Runtime::ASM::bl(fn_803C2388);
/*803BEA0C 003BB80C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803BEA10 003BB810*/ PPC::Runtime::ASM::b(.L_803BEB80);
RUNTIME_PPC_JUMP_LABEL(.L_803BEA14, 0x803BEA14) //this is a jump label
/*803BEA14 003BB814*/ PPC::Runtime::ASM::bl(fn_803C06A4);
/*803BEA18 003BB818*/ PPC::Runtime::ASM::cmplw(context->r3, context->r29);
/*803BEA1C 003BB81C*/ PPC::Runtime::ASM::blt(.L_803BEA28);
/*803BEA20 003BB820*/ PPC::Runtime::ASM::cmplw(context->r3, context->r28);
/*803BEA24 003BB824*/ PPC::Runtime::ASM::ble(.L_803BEAA0);
RUNTIME_PPC_JUMP_LABEL(.L_803BEA28, 0x803BEA28) //this is a jump label
/*803BEA28 003BB828*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xc8);
/*803BEA2C 003BB82C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803BEA30 003BB830*/ PPC::Runtime::ASM::li(context->r5, 0x40);
/*803BEA34 003BB834*/ PPC::Runtime::ASM::bl(memset);
/*803BEA38 003BB838*/ PPC::Runtime::ASM::li(context->r3, 0x80);
/*803BEA3C 003BB83C*/ PPC::Runtime::ASM::li(context->r5, 0x40);
/*803BEA40 003BB840*/ PPC::Runtime::ASM::li(context->r0, 0x11);
/*803BEA44 003BB844*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r1));
/*803BEA48 003BB848*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xc8);
/*803BEA4C 003BB84C*/ PPC::Runtime::ASM::li(context->r4, 0x40);
/*803BEA50 003BB850*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1));
/*803BEA54 003BB854*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*803BEA58 003BB858*/ PPC::Runtime::ASM::bl(fn_803C2388);
/*803BEA5C 003BB85C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803BEA60 003BB860*/ PPC::Runtime::ASM::b(.L_803BEB80);
RUNTIME_PPC_JUMP_LABEL(.L_803BEA64, 0x803BEA64) //this is a jump label
/*803BEA64 003BB864*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x88);
/*803BEA68 003BB868*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803BEA6C 003BB86C*/ PPC::Runtime::ASM::li(context->r5, 0x40);
/*803BEA70 003BB870*/ PPC::Runtime::ASM::bl(memset);
/*803BEA74 003BB874*/ PPC::Runtime::ASM::li(context->r3, 0x80);
/*803BEA78 003BB878*/ PPC::Runtime::ASM::li(context->r5, 0x40);
/*803BEA7C 003BB87C*/ PPC::Runtime::ASM::li(context->r0, 0x12);
/*803BEA80 003BB880*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*803BEA84 003BB884*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x88);
/*803BEA88 003BB888*/ PPC::Runtime::ASM::li(context->r4, 0x40);
/*803BEA8C 003BB88C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*803BEA90 003BB890*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*803BEA94 003BB894*/ PPC::Runtime::ASM::bl(fn_803C2388);
/*803BEA98 003BB898*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803BEA9C 003BB89C*/ PPC::Runtime::ASM::b(.L_803BEB80);
RUNTIME_PPC_JUMP_LABEL(.L_803BEAA0, 0x803BEAA0) //this is a jump label
/*803BEAA0 003BB8A0*/ PPC::Runtime::ASM::bl(TRKTargetStopped);
/*803BEAA4 003BB8A4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803BEAA8 003BB8A8*/ PPC::Runtime::ASM::bne(.L_803BEAE8);
/*803BEAAC 003BB8AC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x48);
/*803BEAB0 003BB8B0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803BEAB4 003BB8B4*/ PPC::Runtime::ASM::li(context->r5, 0x40);
/*803BEAB8 003BB8B8*/ PPC::Runtime::ASM::bl(memset);
/*803BEABC 003BB8BC*/ PPC::Runtime::ASM::li(context->r3, 0x80);
/*803BEAC0 003BB8C0*/ PPC::Runtime::ASM::li(context->r5, 0x40);
/*803BEAC4 003BB8C4*/ PPC::Runtime::ASM::li(context->r0, 0x16);
/*803BEAC8 003BB8C8*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*803BEACC 003BB8CC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x48);
/*803BEAD0 003BB8D0*/ PPC::Runtime::ASM::li(context->r4, 0x40);
/*803BEAD4 003BB8D4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*803BEAD8 003BB8D8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*803BEADC 003BB8DC*/ PPC::Runtime::ASM::bl(fn_803C2388);
/*803BEAE0 003BB8E0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803BEAE4 003BB8E4*/ PPC::Runtime::ASM::b(.L_803BEB80);
RUNTIME_PPC_JUMP_LABEL(.L_803BEAE8, 0x803BEAE8) //this is a jump label
/*803BEAE8 003BB8E8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*803BEAEC 003BB8EC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803BEAF0 003BB8F0*/ PPC::Runtime::ASM::li(context->r5, 0x40);
/*803BEAF4 003BB8F4*/ PPC::Runtime::ASM::bl(memset);
/*803BEAF8 003BB8F8*/ PPC::Runtime::ASM::li(context->r3, 0x80);
/*803BEAFC 003BB8FC*/ PPC::Runtime::ASM::li(context->r5, 0x40);
/*803BEB00 003BB900*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803BEB04 003BB904*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803BEB08 003BB908*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*803BEB0C 003BB90C*/ PPC::Runtime::ASM::li(context->r4, 0x40);
/*803BEB10 003BB910*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803BEB14 003BB914*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803BEB18 003BB918*/ PPC::Runtime::ASM::bl(fn_803C2388);
/*803BEB1C 003BB91C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x10);
/*803BEB20 003BB920*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803BEB24 003BB924*/ PPC::Runtime::ASM::beq(.L_803BEB50);
/*803BEB28 003BB928*/ PPC::Runtime::ASM::bge(.L_803BEB44);
/*803BEB2C 003BB92C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x1);
/*803BEB30 003BB930*/ PPC::Runtime::ASM::beq(.L_803BEB68);
/*803BEB34 003BB934*/ PPC::Runtime::ASM::bge(.L_803BEB80);
/*803BEB38 003BB938*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*803BEB3C 003BB93C*/ PPC::Runtime::ASM::bge(.L_803BEB50);
/*803BEB40 003BB940*/ PPC::Runtime::ASM::b(.L_803BEB80);
RUNTIME_PPC_JUMP_LABEL(.L_803BEB44, 0x803BEB44) //this is a jump label
/*803BEB44 003BB944*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x12);
/*803BEB48 003BB948*/ PPC::Runtime::ASM::bge(.L_803BEB80);
/*803BEB4C 003BB94C*/ PPC::Runtime::ASM::b(.L_803BEB68);
RUNTIME_PPC_JUMP_LABEL(.L_803BEB50, 0x803BEB50) //this is a jump label
/*803BEB50 003BB950*/ PPC::Runtime::ASM::subfic(context->r0, context->r31, 0x10);
/*803BEB54 003BB954*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803BEB58 003BB958*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*803BEB5C 003BB95C*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 5);
/*803BEB60 003BB960*/ PPC::Runtime::ASM::bl(fn_TRKTargetSingleStep);
/*803BEB64 003BB964*/ PPC::Runtime::ASM::b(.L_803BEB80);
RUNTIME_PPC_JUMP_LABEL(.L_803BEB68, 0x803BEB68) //this is a jump label
/*803BEB68 003BB968*/ PPC::Runtime::ASM::subfic(context->r0, context->r31, 0x11);
/*803BEB6C 003BB96C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803BEB70 003BB970*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*803BEB74 003BB974*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*803BEB78 003BB978*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 5);
/*803BEB7C 003BB97C*/ PPC::Runtime::ASM::bl(fn_TRKTargetStepOutOfRange);
RUNTIME_PPC_JUMP_LABEL(.L_803BEB80, 0x803BEB80) //this is a jump label
/*803BEB80 003BB980*/ PPC::Runtime::ASM::lmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14c, context->r1));
/*803BEB84 003BB984*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x164, context->r1));
/*803BEB88 003BB988*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803BEB8C 003BB98C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x160);
/*803BEB90 003BB990*/ PPC::Runtime::ASM::blr();
}