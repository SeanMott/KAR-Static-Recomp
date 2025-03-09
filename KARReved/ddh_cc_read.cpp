//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "MWTRACE.hpp"
#include "fn_803F3928.hpp"
#include "fn_803F3930.hpp"
#include "fn_CircleBufferWriteBytes.hpp"
#include "fn_803C2F20.hpp"
#include "fn_CircleBufferReadBytes.hpp"
#include "MWTRACE.hpp"



void ddh_cc_read(PPC::Runtime::GCContext* context)
{
/*803C2B18 003BF918*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x820, context->r1));
/*803C2B1C 003BF91C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C2B20 003BF920*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x824, context->r1));
/*803C2B24 003BF924*/ PPC::Runtime::ASM::stmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80c, context->r1));
/*803C2B28 003BF928*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*803C2B2C 003BF92C*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*803C2B30 003BF930*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*803C2B34 003BF934*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDD08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C2B38 003BF938*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803C2B3C 003BF93C*/ PPC::Runtime::ASM::bne(.L_803C2B48);
/*803C2B40 003BF940*/ PPC::Runtime::ASM::li(context->r3, -0x2711);
/*803C2B44 003BF944*/ PPC::Runtime::ASM::b(.L_803C2BF0);
RUNTIME_PPC_JUMP_LABEL(.L_803C2B48, 0x803C2B48) //this is a jump label
/*803C2B48 003BF948*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_104 @ Get_MemoryOffset_HighBit);
/*803C2B4C 003BF94C*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*803C2B50 003BF950*/ PPC::Runtime::ASM::addi(context->r4, context->r3, MemoryOffset_104 @ Get_MemoryOffset_LowBit);
/*803C2B54 003BF954*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*803C2B58 003BF958*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803C2B5C 003BF95C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803C2B60 003BF960*/ PPC::Runtime::ASM::bl(MWTRACE);
/*803C2B64 003BF964*/ PPC::Runtime::ASM::lis(context->r3, lbl_8056C600 @ Get_MemoryOffset_HighBit);
/*803C2B68 003BF968*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_8056C600 @ Get_MemoryOffset_LowBit);
/*803C2B6C 003BF96C*/ PPC::Runtime::ASM::b(.L_803C2BA4);
RUNTIME_PPC_JUMP_LABEL(.L_803C2B70, 0x803C2B70) //this is a jump label
/*803C2B70 003BF970*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*803C2B74 003BF974*/ PPC::Runtime::ASM::bl(fn_803F3928);
/* 803C2B78 003BF978  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*803C2B7C 003BF97C*/ PPC::Runtime::ASM::beq(.L_803C2BA4);
/*803C2B80 003BF980*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*803C2B84 003BF984*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*803C2B88 003BF988*/ PPC::Runtime::ASM::bl(fn_803F3930);
/* 803C2B8C 003BF98C  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*803C2B90 003BF990*/ PPC::Runtime::ASM::bne(.L_803C2BA4);
/*803C2B94 003BF994*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803C2B98 003BF998*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*803C2B9C 003BF99C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*803C2BA0 003BF9A0*/ PPC::Runtime::ASM::bl(fn_CircleBufferWriteBytes);
RUNTIME_PPC_JUMP_LABEL(.L_803C2BA4, 0x803C2BA4) //this is a jump label
/*803C2BA4 003BF9A4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803C2BA8 003BF9A8*/ PPC::Runtime::ASM::bl(fn_803C2F20);
/*803C2BAC 003BF9AC*/ PPC::Runtime::ASM::cmplw(context->r3, context->r30);
/*803C2BB0 003BF9B0*/ PPC::Runtime::ASM::blt(.L_803C2B70);
/*803C2BB4 003BF9B4*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*803C2BB8 003BF9B8*/ PPC::Runtime::ASM::bne(.L_803C2BD4);
/*803C2BBC 003BF9BC*/ PPC::Runtime::ASM::lis(context->r3, lbl_8056C600 @ Get_MemoryOffset_HighBit);
/*803C2BC0 003BF9C0*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*803C2BC4 003BF9C4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8056C600 @ Get_MemoryOffset_LowBit);
/*803C2BC8 003BF9C8*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*803C2BCC 003BF9CC*/ PPC::Runtime::ASM::bl(fn_CircleBufferReadBytes);
/*803C2BD0 003BF9D0*/ PPC::Runtime::ASM::b(.L_803C2BEC);
RUNTIME_PPC_JUMP_LABEL(.L_803C2BD4, 0x803C2BD4) //this is a jump label
/*803C2BD4 003BF9D4*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_105 @ Get_MemoryOffset_HighBit);
/*803C2BD8 003BF9D8*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*803C2BDC 003BF9DC*/ PPC::Runtime::ASM::addi(context->r4, context->r3, MemoryOffset_105 @ Get_MemoryOffset_LowBit);
/*803C2BE0 003BF9E0*/ PPC::Runtime::ASM::li(context->r3, 0x8);
/*803C2BE4 003BF9E4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803C2BE8 003BF9E8*/ PPC::Runtime::ASM::bl(MWTRACE);
RUNTIME_PPC_JUMP_LABEL(.L_803C2BEC, 0x803C2BEC) //this is a jump label
/*803C2BEC 003BF9EC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
RUNTIME_PPC_JUMP_LABEL(.L_803C2BF0, 0x803C2BF0) //this is a jump label
/*803C2BF0 003BF9F0*/ PPC::Runtime::ASM::lmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80c, context->r1));
/*803C2BF4 003BF9F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x824, context->r1));
/*803C2BF8 003BF9F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C2BFC 003BF9FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x820);
/*803C2C00 003BFA00*/ PPC::Runtime::ASM::blr();
}