//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800547E0(PPC::Runtime::GCContext* context)
{
/*800547E0 000515E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800547E4 000515E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800547E8 000515E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800547EC 000515EC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800547F0 000515F0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800547F4 000515F4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/* 800547F8 000515F8  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*800547FC 000515FC*/ PPC::Runtime::ASM::mr(context->r30, context->r29);
/*80054800 00051600*/ PPC::Runtime::ASM::beq(.L_80054810);
/*80054804 00051604*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80054808 00051608*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 19, 19);
/*8005480C 0005160C*/ PPC::Runtime::ASM::beq(.L_80054818);
RUNTIME_PPC_JUMP_LABEL(.L_80054810, 0x80054810) //this is a jump label
/*80054810 00051610*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80054814 00051614*/ PPC::Runtime::ASM::b(.L_800548E8);
RUNTIME_PPC_JUMP_LABEL(.L_80054818, 0x80054818) //this is a jump label
/*80054818 00051618*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8005481C 0005161C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80054820 00051620*/ PPC::Runtime::ASM::bne(.L_8005484C);
/*80054824 00051624*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r29));
/*80054828 00051628*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8005482C 0005162C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80054830 00051630*/ PPC::Runtime::ASM::beq(.L_80054844);
/*80054834 00051634*/ PPC::Runtime::ASM::bl(fn_HSD_AObjGetFlags);
/*80054838 00051638*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 1, 1);
/*8005483C 0005163C*/ PPC::Runtime::ASM::bne(.L_80054844);
/*80054840 00051640*/ PPC::Runtime::ASM::li(context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80054844, 0x80054844) //this is a jump label
/*80054844 00051644*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80054848 00051648*/ PPC::Runtime::ASM::b(.L_800548E8);
RUNTIME_PPC_JUMP_LABEL(.L_8005484C, 0x8005484C) //this is a jump label
/*8005484C 0005164C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r29));
/*80054850 00051650*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80054854 00051654*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80054858 00051658*/ PPC::Runtime::ASM::beq(.L_8005486C);
/*8005485C 0005165C*/ PPC::Runtime::ASM::bl(fn_HSD_AObjGetFlags);
/*80054860 00051660*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 1, 1);
/*80054864 00051664*/ PPC::Runtime::ASM::bne(.L_8005486C);
/*80054868 00051668*/ PPC::Runtime::ASM::li(context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8005486C, 0x8005486C) //this is a jump label
/*8005486C 0005166C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*80054870 00051670*/ PPC::Runtime::ASM::beq(.L_8005487C);
/*80054874 00051674*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80054878 00051678*/ PPC::Runtime::ASM::b(.L_800548E8);
RUNTIME_PPC_JUMP_LABEL(.L_8005487C, 0x8005487C) //this is a jump label
/*8005487C 0005167C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*80054880 00051680*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80054884 00051684*/ PPC::Runtime::ASM::bne(.L_80054894);
/*80054888 00051688*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*8005488C 0005168C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80054890 00051690*/ PPC::Runtime::ASM::beq(.L_800548A0);
RUNTIME_PPC_JUMP_LABEL(.L_80054894, 0x80054894) //this is a jump label
/*80054894 00051694*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80054898 00051698*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 19, 19);
/*8005489C 0005169C*/ PPC::Runtime::ASM::beq(.L_800548D0);
RUNTIME_PPC_JUMP_LABEL(.L_800548A0, 0x800548A0) //this is a jump label
/*800548A0 000516A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*800548A4 000516A4*/ PPC::Runtime::ASM::cmplw(context->r3, context->r30);
/*800548A8 000516A8*/ PPC::Runtime::ASM::bne(.L_800548B4);
/*800548AC 000516AC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800548B0 000516B0*/ PPC::Runtime::ASM::b(.L_800548E8);
RUNTIME_PPC_JUMP_LABEL(.L_800548B4, 0x800548B4) //this is a jump label
/*800548B4 000516B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800548B8 000516B8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800548BC 000516BC*/ PPC::Runtime::ASM::beq(.L_800548C8);
/*800548C0 000516C0*/ PPC::Runtime::ASM::mr(context->r29, context->r0);
/*800548C4 000516C4*/ PPC::Runtime::ASM::b(.L_8005484C);
RUNTIME_PPC_JUMP_LABEL(.L_800548C8, 0x800548C8) //this is a jump label
/*800548C8 000516C8*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800548CC 000516CC*/ PPC::Runtime::ASM::b(.L_800548A0);
RUNTIME_PPC_JUMP_LABEL(.L_800548D0, 0x800548D0) //this is a jump label
/*800548D0 000516D0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800548D4 000516D4*/ PPC::Runtime::ASM::beq(.L_800548E0);
/*800548D8 000516D8*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800548DC 000516DC*/ PPC::Runtime::ASM::b(.L_8005484C);
RUNTIME_PPC_JUMP_LABEL(.L_800548E0, 0x800548E0) //this is a jump label
/*800548E0 000516E0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*800548E4 000516E4*/ PPC::Runtime::ASM::b(.L_8005484C);
RUNTIME_PPC_JUMP_LABEL(.L_800548E8, 0x800548E8) //this is a jump label
/*800548E8 000516E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800548EC 000516EC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800548F0 000516F0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800548F4 000516F4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800548F8 000516F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800548FC 000516FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80054900 00051700*/ PPC::Runtime::ASM::blr();
}