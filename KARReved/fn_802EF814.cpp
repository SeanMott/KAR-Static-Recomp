//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80055658.hpp"
#include "fn_80055658.hpp"
#include "fn_80055658.hpp"
#include "fn_80055658.hpp"
#include "fn_80055658.hpp"
#include "fn_80055658.hpp"
#include "fn_80055658.hpp"
#include "fn_802EF814.hpp"



void fn_802EF814(PPC::Runtime::GCContext* context)
{
/*802EF814 002EC614*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*802EF818 002EC618*/ PPC::Runtime::ASM::mflr(context->r0);
/*802EF81C 002EC61C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802EF820 002EC620*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*802EF824 002EC624*/ PPC::Runtime::ASM::bl(_savegpr_18);
/* 802EF828 002EC628  7C 73 1B 79 */ mr. context->r19 , context->r3
/*802EF82C 002EC62C*/ PPC::Runtime::ASM::mr(context->r18, context->r4);
/*802EF830 002EC630*/ PPC::Runtime::ASM::beq(.L_802EFA14);
/*802EF834 002EC634*/ PPC::Runtime::ASM::cmplwi(context->r18, 0x0);
/*802EF838 002EC638*/ PPC::Runtime::ASM::beq(.L_802EFA14);
/*802EF83C 002EC63C*/ PPC::Runtime::ASM::mr(context->r3, context->r18);
/*802EF840 002EC640*/ PPC::Runtime::ASM::mr(context->r4, context->r19);
/*802EF844 002EC644*/ PPC::Runtime::ASM::bl(fn_80055658);
/*802EF848 002EC648*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r18));
/*802EF84C 002EC64C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 19, 19);
/*802EF850 002EC650*/ PPC::Runtime::ASM::bne(.L_802EFA14);
/*802EF854 002EC654*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r19));
/*802EF858 002EC658*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r18));
/*802EF85C 002EC65C*/ PPC::Runtime::ASM::b(.L_802EFA0C);
RUNTIME_PPC_JUMP_LABEL(.L_802EF860, 0x802EF860) //this is a jump label
/*802EF860 002EC660*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*802EF864 002EC664*/ PPC::Runtime::ASM::beq(.L_802EFA04);
/*802EF868 002EC668*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802EF86C 002EC66C*/ PPC::Runtime::ASM::beq(.L_802EFA04);
/*802EF870 002EC670*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802EF874 002EC674*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*802EF878 002EC678*/ PPC::Runtime::ASM::bl(fn_80055658);
/*802EF87C 002EC67C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*802EF880 002EC680*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 19, 19);
/*802EF884 002EC684*/ PPC::Runtime::ASM::bne(.L_802EFA04);
/*802EF888 002EC688*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*802EF88C 002EC68C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*802EF890 002EC690*/ PPC::Runtime::ASM::b(.L_802EF9FC);
RUNTIME_PPC_JUMP_LABEL(.L_802EF894, 0x802EF894) //this is a jump label
/*802EF894 002EC694*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*802EF898 002EC698*/ PPC::Runtime::ASM::beq(.L_802EF9F4);
/*802EF89C 002EC69C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802EF8A0 002EC6A0*/ PPC::Runtime::ASM::beq(.L_802EF9F4);
/*802EF8A4 002EC6A4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802EF8A8 002EC6A8*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*802EF8AC 002EC6AC*/ PPC::Runtime::ASM::bl(fn_80055658);
/*802EF8B0 002EC6B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*802EF8B4 002EC6B4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 19, 19);
/*802EF8B8 002EC6B8*/ PPC::Runtime::ASM::bne(.L_802EF9F4);
/*802EF8BC 002EC6BC*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*802EF8C0 002EC6C0*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*802EF8C4 002EC6C4*/ PPC::Runtime::ASM::b(.L_802EF9EC);
RUNTIME_PPC_JUMP_LABEL(.L_802EF8C8, 0x802EF8C8) //this is a jump label
/*802EF8C8 002EC6C8*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*802EF8CC 002EC6CC*/ PPC::Runtime::ASM::beq(.L_802EF9E4);
/*802EF8D0 002EC6D0*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*802EF8D4 002EC6D4*/ PPC::Runtime::ASM::beq(.L_802EF9E4);
/*802EF8D8 002EC6D8*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*802EF8DC 002EC6DC*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*802EF8E0 002EC6E0*/ PPC::Runtime::ASM::bl(fn_80055658);
/*802EF8E4 002EC6E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*802EF8E8 002EC6E8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 19, 19);
/*802EF8EC 002EC6EC*/ PPC::Runtime::ASM::bne(.L_802EF9E4);
/*802EF8F0 002EC6F0*/ PPC::Runtime::ASM::lwz(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
/*802EF8F4 002EC6F4*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*802EF8F8 002EC6F8*/ PPC::Runtime::ASM::b(.L_802EF9DC);
RUNTIME_PPC_JUMP_LABEL(.L_802EF8FC, 0x802EF8FC) //this is a jump label
/*802EF8FC 002EC6FC*/ PPC::Runtime::ASM::cmplwi(context->r24, 0x0);
/*802EF900 002EC700*/ PPC::Runtime::ASM::beq(.L_802EF9D4);
/*802EF904 002EC704*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*802EF908 002EC708*/ PPC::Runtime::ASM::beq(.L_802EF9D4);
/*802EF90C 002EC70C*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*802EF910 002EC710*/ PPC::Runtime::ASM::mr(context->r4, context->r24);
/*802EF914 002EC714*/ PPC::Runtime::ASM::bl(fn_80055658);
/*802EF918 002EC718*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r25));
/*802EF91C 002EC71C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 19, 19);
/*802EF920 002EC720*/ PPC::Runtime::ASM::bne(.L_802EF9D4);
/*802EF924 002EC724*/ PPC::Runtime::ASM::lwz(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r24));
/*802EF928 002EC728*/ PPC::Runtime::ASM::lwz(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r25));
/*802EF92C 002EC72C*/ PPC::Runtime::ASM::b(.L_802EF9CC);
RUNTIME_PPC_JUMP_LABEL(.L_802EF930, 0x802EF930) //this is a jump label
/*802EF930 002EC730*/ PPC::Runtime::ASM::cmplwi(context->r22, 0x0);
/*802EF934 002EC734*/ PPC::Runtime::ASM::beq(.L_802EF9C4);
/*802EF938 002EC738*/ PPC::Runtime::ASM::cmplwi(context->r23, 0x0);
/*802EF93C 002EC73C*/ PPC::Runtime::ASM::beq(.L_802EF9C4);
/*802EF940 002EC740*/ PPC::Runtime::ASM::mr(context->r3, context->r23);
/*802EF944 002EC744*/ PPC::Runtime::ASM::mr(context->r4, context->r22);
/*802EF948 002EC748*/ PPC::Runtime::ASM::bl(fn_80055658);
/*802EF94C 002EC74C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r23));
/*802EF950 002EC750*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 19, 19);
/*802EF954 002EC754*/ PPC::Runtime::ASM::bne(.L_802EF9C4);
/*802EF958 002EC758*/ PPC::Runtime::ASM::lwz(context->r20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r22));
/*802EF95C 002EC75C*/ PPC::Runtime::ASM::lwz(context->r21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r23));
/*802EF960 002EC760*/ PPC::Runtime::ASM::b(.L_802EF9BC);
RUNTIME_PPC_JUMP_LABEL(.L_802EF964, 0x802EF964) //this is a jump label
/*802EF964 002EC764*/ PPC::Runtime::ASM::cmplwi(context->r20, 0x0);
/*802EF968 002EC768*/ PPC::Runtime::ASM::beq(.L_802EF9B4);
/*802EF96C 002EC76C*/ PPC::Runtime::ASM::cmplwi(context->r21, 0x0);
/*802EF970 002EC770*/ PPC::Runtime::ASM::beq(.L_802EF9B4);
/*802EF974 002EC774*/ PPC::Runtime::ASM::mr(context->r3, context->r21);
/*802EF978 002EC778*/ PPC::Runtime::ASM::mr(context->r4, context->r20);
/*802EF97C 002EC77C*/ PPC::Runtime::ASM::bl(fn_80055658);
/*802EF980 002EC780*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r21));
/*802EF984 002EC784*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 19, 19);
/*802EF988 002EC788*/ PPC::Runtime::ASM::bne(.L_802EF9B4);
/*802EF98C 002EC78C*/ PPC::Runtime::ASM::lwz(context->r18, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r20));
/*802EF990 002EC790*/ PPC::Runtime::ASM::lwz(context->r19, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r21));
/*802EF994 002EC794*/ PPC::Runtime::ASM::b(.L_802EF9AC);
RUNTIME_PPC_JUMP_LABEL(.L_802EF998, 0x802EF998) //this is a jump label
/*802EF998 002EC798*/ PPC::Runtime::ASM::mr(context->r3, context->r18);
/*802EF99C 002EC79C*/ PPC::Runtime::ASM::mr(context->r4, context->r19);
/*802EF9A0 002EC7A0*/ PPC::Runtime::ASM::bl(fn_802EF814);
/*802EF9A4 002EC7A4*/ PPC::Runtime::ASM::lwz(context->r18, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r18));
/*802EF9A8 002EC7A8*/ PPC::Runtime::ASM::lwz(context->r19, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r19));
RUNTIME_PPC_JUMP_LABEL(.L_802EF9AC, 0x802EF9AC) //this is a jump label
/*802EF9AC 002EC7AC*/ PPC::Runtime::ASM::cmplwi(context->r19, 0x0);
/*802EF9B0 002EC7B0*/ PPC::Runtime::ASM::bne(.L_802EF998);
RUNTIME_PPC_JUMP_LABEL(.L_802EF9B4, 0x802EF9B4) //this is a jump label
/*802EF9B4 002EC7B4*/ PPC::Runtime::ASM::lwz(context->r20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r20));
/*802EF9B8 002EC7B8*/ PPC::Runtime::ASM::lwz(context->r21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r21));
RUNTIME_PPC_JUMP_LABEL(.L_802EF9BC, 0x802EF9BC) //this is a jump label
/*802EF9BC 002EC7BC*/ PPC::Runtime::ASM::cmplwi(context->r21, 0x0);
/*802EF9C0 002EC7C0*/ PPC::Runtime::ASM::bne(.L_802EF964);
RUNTIME_PPC_JUMP_LABEL(.L_802EF9C4, 0x802EF9C4) //this is a jump label
/*802EF9C4 002EC7C4*/ PPC::Runtime::ASM::lwz(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r22));
/*802EF9C8 002EC7C8*/ PPC::Runtime::ASM::lwz(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r23));
RUNTIME_PPC_JUMP_LABEL(.L_802EF9CC, 0x802EF9CC) //this is a jump label
/*802EF9CC 002EC7CC*/ PPC::Runtime::ASM::cmplwi(context->r23, 0x0);
/*802EF9D0 002EC7D0*/ PPC::Runtime::ASM::bne(.L_802EF930);
RUNTIME_PPC_JUMP_LABEL(.L_802EF9D4, 0x802EF9D4) //this is a jump label
/*802EF9D4 002EC7D4*/ PPC::Runtime::ASM::lwz(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r24));
/*802EF9D8 002EC7D8*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r25));
RUNTIME_PPC_JUMP_LABEL(.L_802EF9DC, 0x802EF9DC) //this is a jump label
/*802EF9DC 002EC7DC*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*802EF9E0 002EC7E0*/ PPC::Runtime::ASM::bne(.L_802EF8FC);
RUNTIME_PPC_JUMP_LABEL(.L_802EF9E4, 0x802EF9E4) //this is a jump label
/*802EF9E4 002EC7E4*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*802EF9E8 002EC7E8*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_802EF9EC, 0x802EF9EC) //this is a jump label
/*802EF9EC 002EC7EC*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*802EF9F0 002EC7F0*/ PPC::Runtime::ASM::bne(.L_802EF8C8);
RUNTIME_PPC_JUMP_LABEL(.L_802EF9F4, 0x802EF9F4) //this is a jump label
/*802EF9F4 002EC7F4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*802EF9F8 002EC7F8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_802EF9FC, 0x802EF9FC) //this is a jump label
/*802EF9FC 002EC7FC*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802EFA00 002EC800*/ PPC::Runtime::ASM::bne(.L_802EF894);
RUNTIME_PPC_JUMP_LABEL(.L_802EFA04, 0x802EFA04) //this is a jump label
/*802EFA04 002EC804*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802EFA08 002EC808*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802EFA0C, 0x802EFA0C) //this is a jump label
/*802EFA0C 002EC80C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802EFA10 002EC810*/ PPC::Runtime::ASM::bne(.L_802EF860);
RUNTIME_PPC_JUMP_LABEL(.L_802EFA14, 0x802EFA14) //this is a jump label
/*802EFA14 002EC814*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*802EFA18 002EC818*/ PPC::Runtime::ASM::bl(_restgpr_18);
/*802EFA1C 002EC81C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802EFA20 002EC820*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802EFA24 002EC824*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*802EFA28 002EC828*/ PPC::Runtime::ASM::blr();
}