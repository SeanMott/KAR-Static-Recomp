//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_DObjGetNext.hpp"
#include "fn_HSD_DObjGetNext.hpp"
#include "fn_HSD_DObjGetNext.hpp"
#include "fn_8005299C.hpp"
#include "fn_80052C58.hpp"
#include "fn_HSD_FogAdjGetFlags.hpp"



void fn_8005299C(PPC::Runtime::GCContext* context)
{
/*8005299C 0004F79C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*800529A0 0004F7A0*/ PPC::Runtime::ASM::mflr(context->r0);
/*800529A4 0004F7A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800529A8 0004F7A8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800529AC 0004F7AC*/ PPC::Runtime::ASM::bl(_savegpr_22);
/* 800529B0 0004F7B0  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*800529B4 0004F7B4*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*800529B8 0004F7B8*/ PPC::Runtime::ASM::beq(.L_800529C4);
/*800529BC 0004F7BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800529C0 0004F7C0*/ PPC::Runtime::ASM::b(.L_800529C8);
RUNTIME_PPC_JUMP_LABEL(.L_800529C4, 0x800529C4) //this is a jump label
/*800529C4 0004F7C4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800529C8, 0x800529C8) //this is a jump label
/*800529C8 0004F7C8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800529CC 0004F7CC*/ PPC::Runtime::ASM::beq(.L_80052C0C);
/*800529D0 0004F7D0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800529D4 0004F7D4*/ PPC::Runtime::ASM::beq(.L_800529E0);
/*800529D8 0004F7D8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800529DC 0004F7DC*/ PPC::Runtime::ASM::b(.L_800529E4);
RUNTIME_PPC_JUMP_LABEL(.L_800529E0, 0x800529E0) //this is a jump label
/*800529E0 0004F7E0*/ PPC::Runtime::ASM::li(context->r28, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800529E4, 0x800529E4) //this is a jump label
/*800529E4 0004F7E4*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*800529E8 0004F7E8*/ PPC::Runtime::ASM::beq(.L_800529F4);
/*800529EC 0004F7EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*800529F0 0004F7F0*/ PPC::Runtime::ASM::b(.L_800529F8);
RUNTIME_PPC_JUMP_LABEL(.L_800529F4, 0x800529F4) //this is a jump label
/*800529F4 0004F7F4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800529F8, 0x800529F8) //this is a jump label
/*800529F8 0004F7F8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800529FC 0004F7FC*/ PPC::Runtime::ASM::beq(.L_80052BF0);
/*80052A00 0004F800*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80052A04 0004F804*/ PPC::Runtime::ASM::beq(.L_80052A10);
/*80052A08 0004F808*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*80052A0C 0004F80C*/ PPC::Runtime::ASM::b(.L_80052A14);
RUNTIME_PPC_JUMP_LABEL(.L_80052A10, 0x80052A10) //this is a jump label
/*80052A10 0004F810*/ PPC::Runtime::ASM::li(context->r27, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80052A14, 0x80052A14) //this is a jump label
/*80052A14 0004F814*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*80052A18 0004F818*/ PPC::Runtime::ASM::beq(.L_80052A24);
/*80052A1C 0004F81C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*80052A20 0004F820*/ PPC::Runtime::ASM::b(.L_80052A28);
RUNTIME_PPC_JUMP_LABEL(.L_80052A24, 0x80052A24) //this is a jump label
/*80052A24 0004F824*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80052A28, 0x80052A28) //this is a jump label
/*80052A28 0004F828*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80052A2C 0004F82C*/ PPC::Runtime::ASM::beq(.L_80052BD4);
/*80052A30 0004F830*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*80052A34 0004F834*/ PPC::Runtime::ASM::beq(.L_80052A40);
/*80052A38 0004F838*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*80052A3C 0004F83C*/ PPC::Runtime::ASM::b(.L_80052A44);
RUNTIME_PPC_JUMP_LABEL(.L_80052A40, 0x80052A40) //this is a jump label
/*80052A40 0004F840*/ PPC::Runtime::ASM::li(context->r26, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80052A44, 0x80052A44) //this is a jump label
/*80052A44 0004F844*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*80052A48 0004F848*/ PPC::Runtime::ASM::beq(.L_80052A54);
/*80052A4C 0004F84C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*80052A50 0004F850*/ PPC::Runtime::ASM::b(.L_80052A58);
RUNTIME_PPC_JUMP_LABEL(.L_80052A54, 0x80052A54) //this is a jump label
/*80052A54 0004F854*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80052A58, 0x80052A58) //this is a jump label
/*80052A58 0004F858*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80052A5C 0004F85C*/ PPC::Runtime::ASM::beq(.L_80052BB8);
/*80052A60 0004F860*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*80052A64 0004F864*/ PPC::Runtime::ASM::beq(.L_80052A70);
/*80052A68 0004F868*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*80052A6C 0004F86C*/ PPC::Runtime::ASM::b(.L_80052A74);
RUNTIME_PPC_JUMP_LABEL(.L_80052A70, 0x80052A70) //this is a jump label
/*80052A70 0004F870*/ PPC::Runtime::ASM::li(context->r25, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80052A74, 0x80052A74) //this is a jump label
/*80052A74 0004F874*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*80052A78 0004F878*/ PPC::Runtime::ASM::beq(.L_80052A84);
/*80052A7C 0004F87C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*80052A80 0004F880*/ PPC::Runtime::ASM::b(.L_80052A88);
RUNTIME_PPC_JUMP_LABEL(.L_80052A84, 0x80052A84) //this is a jump label
/*80052A84 0004F884*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80052A88, 0x80052A88) //this is a jump label
/*80052A88 0004F888*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80052A8C 0004F88C*/ PPC::Runtime::ASM::beq(.L_80052B9C);
/*80052A90 0004F890*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*80052A94 0004F894*/ PPC::Runtime::ASM::beq(.L_80052AA0);
/*80052A98 0004F898*/ PPC::Runtime::ASM::lwz(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*80052A9C 0004F89C*/ PPC::Runtime::ASM::b(.L_80052AA4);
RUNTIME_PPC_JUMP_LABEL(.L_80052AA0, 0x80052AA0) //this is a jump label
/*80052AA0 0004F8A0*/ PPC::Runtime::ASM::li(context->r24, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80052AA4, 0x80052AA4) //this is a jump label
/*80052AA4 0004F8A4*/ PPC::Runtime::ASM::cmplwi(context->r24, 0x0);
/*80052AA8 0004F8A8*/ PPC::Runtime::ASM::beq(.L_80052AB4);
/*80052AAC 0004F8AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r24));
/*80052AB0 0004F8B0*/ PPC::Runtime::ASM::b(.L_80052AB8);
RUNTIME_PPC_JUMP_LABEL(.L_80052AB4, 0x80052AB4) //this is a jump label
/*80052AB4 0004F8B4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80052AB8, 0x80052AB8) //this is a jump label
/*80052AB8 0004F8B8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80052ABC 0004F8BC*/ PPC::Runtime::ASM::beq(.L_80052B80);
/*80052AC0 0004F8C0*/ PPC::Runtime::ASM::cmplwi(context->r24, 0x0);
/*80052AC4 0004F8C4*/ PPC::Runtime::ASM::beq(.L_80052AD0);
/*80052AC8 0004F8C8*/ PPC::Runtime::ASM::lwz(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r24));
/*80052ACC 0004F8CC*/ PPC::Runtime::ASM::b(.L_80052AD4);
RUNTIME_PPC_JUMP_LABEL(.L_80052AD0, 0x80052AD0) //this is a jump label
/*80052AD0 0004F8D0*/ PPC::Runtime::ASM::li(context->r23, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80052AD4, 0x80052AD4) //this is a jump label
/*80052AD4 0004F8D4*/ PPC::Runtime::ASM::cmplwi(context->r23, 0x0);
/*80052AD8 0004F8D8*/ PPC::Runtime::ASM::beq(.L_80052AE4);
/*80052ADC 0004F8DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r23));
/*80052AE0 0004F8E0*/ PPC::Runtime::ASM::b(.L_80052AE8);
RUNTIME_PPC_JUMP_LABEL(.L_80052AE4, 0x80052AE4) //this is a jump label
/*80052AE4 0004F8E4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80052AE8, 0x80052AE8) //this is a jump label
/*80052AE8 0004F8E8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80052AEC 0004F8EC*/ PPC::Runtime::ASM::beq(.L_80052B64);
/*80052AF0 0004F8F0*/ PPC::Runtime::ASM::cmplwi(context->r23, 0x0);
/*80052AF4 0004F8F4*/ PPC::Runtime::ASM::beq(.L_80052B00);
/*80052AF8 0004F8F8*/ PPC::Runtime::ASM::lwz(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r23));
/*80052AFC 0004F8FC*/ PPC::Runtime::ASM::b(.L_80052B04);
RUNTIME_PPC_JUMP_LABEL(.L_80052B00, 0x80052B00) //this is a jump label
/*80052B00 0004F900*/ PPC::Runtime::ASM::li(context->r22, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80052B04, 0x80052B04) //this is a jump label
/*80052B04 0004F904*/ PPC::Runtime::ASM::cmplwi(context->r22, 0x0);
/*80052B08 0004F908*/ PPC::Runtime::ASM::beq(.L_80052B14);
/*80052B0C 0004F90C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r22));
/*80052B10 0004F910*/ PPC::Runtime::ASM::b(.L_80052B18);
RUNTIME_PPC_JUMP_LABEL(.L_80052B14, 0x80052B14) //this is a jump label
/*80052B14 0004F914*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80052B18, 0x80052B18) //this is a jump label
/*80052B18 0004F918*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80052B1C 0004F91C*/ PPC::Runtime::ASM::beq(.L_80052B54);
/*80052B20 0004F920*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*80052B24 0004F924*/ PPC::Runtime::ASM::bl(fn_HSD_DObjGetNext);
/*80052B28 0004F928*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80052B2C 0004F92C*/ PPC::Runtime::ASM::bl(fn_HSD_DObjGetNext);
/*80052B30 0004F930*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80052B34 0004F934*/ PPC::Runtime::ASM::beq(.L_80052B48);
/*80052B38 0004F938*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80052B3C 0004F93C*/ PPC::Runtime::ASM::bl(fn_HSD_DObjGetNext);
/*80052B40 0004F940*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80052B44 0004F944*/ PPC::Runtime::ASM::bl(fn_8005299C);
RUNTIME_PPC_JUMP_LABEL(.L_80052B48, 0x80052B48) //this is a jump label
/*80052B48 0004F948*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80052B4C 0004F94C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80052B50 0004F950*/ PPC::Runtime::ASM::bl(fn_80052C58);
RUNTIME_PPC_JUMP_LABEL(.L_80052B54, 0x80052B54) //this is a jump label
/*80052B54 0004F954*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*80052B58 0004F958*/ PPC::Runtime::ASM::bl(fn_HSD_FogAdjGetFlags);
/*80052B5C 0004F95C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80052B60 0004F960*/ PPC::Runtime::ASM::bl(fn_HSD_MObjSetFlags);
RUNTIME_PPC_JUMP_LABEL(.L_80052B64, 0x80052B64) //this is a jump label
/*80052B64 0004F964*/ PPC::Runtime::ASM::cmplwi(context->r23, 0x0);
/*80052B68 0004F968*/ PPC::Runtime::ASM::beq(.L_80052B74);
/*80052B6C 0004F96C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r23));
/*80052B70 0004F970*/ PPC::Runtime::ASM::b(.L_80052B78);
RUNTIME_PPC_JUMP_LABEL(.L_80052B74, 0x80052B74) //this is a jump label
/*80052B74 0004F974*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80052B78, 0x80052B78) //this is a jump label
/*80052B78 0004F978*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80052B7C 0004F97C*/ PPC::Runtime::ASM::bl(fn_HSD_MObjSetFlags);
RUNTIME_PPC_JUMP_LABEL(.L_80052B80, 0x80052B80) //this is a jump label
/*80052B80 0004F980*/ PPC::Runtime::ASM::cmplwi(context->r24, 0x0);
/*80052B84 0004F984*/ PPC::Runtime::ASM::beq(.L_80052B90);
/*80052B88 0004F988*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r24));
/*80052B8C 0004F98C*/ PPC::Runtime::ASM::b(.L_80052B94);
RUNTIME_PPC_JUMP_LABEL(.L_80052B90, 0x80052B90) //this is a jump label
/*80052B90 0004F990*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80052B94, 0x80052B94) //this is a jump label
/*80052B94 0004F994*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80052B98 0004F998*/ PPC::Runtime::ASM::bl(fn_HSD_MObjSetFlags);
RUNTIME_PPC_JUMP_LABEL(.L_80052B9C, 0x80052B9C) //this is a jump label
/*80052B9C 0004F99C*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*80052BA0 0004F9A0*/ PPC::Runtime::ASM::beq(.L_80052BAC);
/*80052BA4 0004F9A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r25));
/*80052BA8 0004F9A8*/ PPC::Runtime::ASM::b(.L_80052BB0);
RUNTIME_PPC_JUMP_LABEL(.L_80052BAC, 0x80052BAC) //this is a jump label
/*80052BAC 0004F9AC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80052BB0, 0x80052BB0) //this is a jump label
/*80052BB0 0004F9B0*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80052BB4 0004F9B4*/ PPC::Runtime::ASM::bl(fn_HSD_MObjSetFlags);
RUNTIME_PPC_JUMP_LABEL(.L_80052BB8, 0x80052BB8) //this is a jump label
/*80052BB8 0004F9B8*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*80052BBC 0004F9BC*/ PPC::Runtime::ASM::beq(.L_80052BC8);
/*80052BC0 0004F9C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*80052BC4 0004F9C4*/ PPC::Runtime::ASM::b(.L_80052BCC);
RUNTIME_PPC_JUMP_LABEL(.L_80052BC8, 0x80052BC8) //this is a jump label
/*80052BC8 0004F9C8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80052BCC, 0x80052BCC) //this is a jump label
/*80052BCC 0004F9CC*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80052BD0 0004F9D0*/ PPC::Runtime::ASM::bl(fn_HSD_MObjSetFlags);
RUNTIME_PPC_JUMP_LABEL(.L_80052BD4, 0x80052BD4) //this is a jump label
/*80052BD4 0004F9D4*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*80052BD8 0004F9D8*/ PPC::Runtime::ASM::beq(.L_80052BE4);
/*80052BDC 0004F9DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*80052BE0 0004F9E0*/ PPC::Runtime::ASM::b(.L_80052BE8);
RUNTIME_PPC_JUMP_LABEL(.L_80052BE4, 0x80052BE4) //this is a jump label
/*80052BE4 0004F9E4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80052BE8, 0x80052BE8) //this is a jump label
/*80052BE8 0004F9E8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80052BEC 0004F9EC*/ PPC::Runtime::ASM::bl(fn_HSD_MObjSetFlags);
RUNTIME_PPC_JUMP_LABEL(.L_80052BF0, 0x80052BF0) //this is a jump label
/*80052BF0 0004F9F0*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80052BF4 0004F9F4*/ PPC::Runtime::ASM::beq(.L_80052C00);
/*80052BF8 0004F9F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*80052BFC 0004F9FC*/ PPC::Runtime::ASM::b(.L_80052C04);
RUNTIME_PPC_JUMP_LABEL(.L_80052C00, 0x80052C00) //this is a jump label
/*80052C00 0004FA00*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80052C04, 0x80052C04) //this is a jump label
/*80052C04 0004FA04*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80052C08 0004FA08*/ PPC::Runtime::ASM::bl(fn_HSD_MObjSetFlags);
RUNTIME_PPC_JUMP_LABEL(.L_80052C0C, 0x80052C0C) //this is a jump label
/*80052C0C 0004FA0C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80052C10 0004FA10*/ PPC::Runtime::ASM::beq(.L_80052C1C);
/*80052C14 0004FA14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80052C18 0004FA18*/ PPC::Runtime::ASM::b(.L_80052C20);
RUNTIME_PPC_JUMP_LABEL(.L_80052C1C, 0x80052C1C) //this is a jump label
/*80052C1C 0004FA1C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80052C20, 0x80052C20) //this is a jump label
/*80052C20 0004FA20*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80052C24 0004FA24*/ PPC::Runtime::ASM::bl(fn_HSD_MObjSetFlags);
/*80052C28 0004FA28*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80052C2C 0004FA2C*/ PPC::Runtime::ASM::bl(_restgpr_22);
/*80052C30 0004FA30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80052C34 0004FA34*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80052C38 0004FA38*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80052C3C 0004FA3C*/ PPC::Runtime::ASM::blr();
}