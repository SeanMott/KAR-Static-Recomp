//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8006A908.hpp"
#include "fn_8006AAA4.hpp"



void fn_8006A7B4(PPC::Runtime::GCContext* context)
{
/*8006A7B4 000675B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x90, context->r1));
/*8006A7B8 000675B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8006A7BC 000675BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*8006A7C0 000675C0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*8006A7C4 000675C4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*8006A7C8 000675C8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8006A7CC 000675CC*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8006A7D0 000675D0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8006A7D4 000675D4*/ PPC::Runtime::ASM::lwz(context->r31, STRUCT_BYTE4_COUNT_1805DD5B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8006A7D8 000675D8*/ PPC::Runtime::ASM::bl(fn_HSD_StateInitTev);
/*8006A7DC 000675DC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8006A7E0 000675E0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*8006A7E4 000675E4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8006A7E8 000675E8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*8006A7EC 000675EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8006A7F0 000675F0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8006A7F4 000675F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8006A7F8 000675F8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8006A7FC 000675FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*8006A800 00067600*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8006A804 00067604*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8006A808 00067608*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8006A80C 0006760C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8006A810 00067610*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8006A814 00067614*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*8006A818 00067618*/ PPC::Runtime::ASM::bl(fn_HSD_SetMaterialColor);
/*8006A81C 0006761C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r30, 0, 28, 28);
/*8006A820 00067620*/ PPC::Runtime::ASM::beq(.L_8006A830);
/*8006A824 00067624*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8006A828 00067628*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*8006A82C 0006762C*/ PPC::Runtime::ASM::bl(fn_HSD_SetMaterialShininess);
RUNTIME_PPC_JUMP_LABEL(.L_8006A830, 0x8006A830) //this is a jump label
/*8006A830 00067630*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*8006A834 00067634*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8006A838 00067638*/ PPC::Runtime::ASM::bl(fn_HSD_TObjSetup_ParseDatFile_ImageStructure);
/*8006A83C 0006763C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8006A840 00067640*/ PPC::Runtime::ASM::bl(fn_HSD_TObjSetup_ParseDatFile_ImageStructureTextureCoordGen);
/*8006A844 00067644*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8006A848 00067648*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8006A84C 0006764C*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*8006A850 00067650*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*8006A854 00067654*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r6));
/*8006A858 00067658*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8006A85C 0006765C*/ PPC::Runtime::ASM::bctrl();
/*8006A860 00067660*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r31));
/*8006A864 00067664*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xff);
/*8006A868 00067668*/ PPC::Runtime::ASM::beq(.L_8006A870);
/*8006A86C 0006766C*/ PPC::Runtime::ASM::oris(context->r30, context->r30, 0x6000);
RUNTIME_PPC_JUMP_LABEL(.L_8006A870, 0x8006A870) //this is a jump label
/*8006A870 00067670*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8006A874 00067674*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8006A878 00067678*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*8006A87C 0006767C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*8006A880 00067680*/ PPC::Runtime::ASM::bl(fn_8006A908);
/*8006A884 00067684*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*8006A888 00067688*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8006A88C 0006768C*/ PPC::Runtime::ASM::mr(context->r28, context->r0);
/*8006A890 00067690*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8006A894 00067694*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*8006A898 00067698*/ PPC::Runtime::ASM::bl(fn_8006AAA4);
/*8006A89C 0006769C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8006A8A0 000676A0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8006A8A4 000676A4*/ PPC::Runtime::ASM::bl(fn_HSD_SetupRenderModeWithCustomPE?);
/*8006A8A8 000676A8*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8006A8AC 000676AC*/ PPC::Runtime::ASM::bne(.L_8006A8E8);
/*8006A8B0 000676B0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x235, context->r31));
/* 8006A8B4 000676B4  54 60 D7 FF */ extrwi. context->r0 , context->r3 , 1 , 25
/*8006A8B8 000676B8*/ PPC::Runtime::ASM::beq(.L_8006A8E8);
/* 8006A8BC 000676BC  54 60 DF FF */ extrwi. context->r0 , context->r3 , 1 , 26
/*8006A8C0 000676C0*/ PPC::Runtime::ASM::beq(.L_8006A8E8);
/*8006A8C4 000676C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x204, context->r31));
/*8006A8C8 000676C8*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8006A8CC 000676CC*/ PPC::Runtime::ASM::bl(fn_HSD_LObjSetFlags);
/*8006A8D0 000676D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x208, context->r31));
/*8006A8D4 000676D4*/ PPC::Runtime::ASM::bl(fn_HSD_LObjSetCurrentAll?);
/*8006A8D8 000676D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x204, context->r31));
/*8006A8DC 000676DC*/ PPC::Runtime::ASM::bl(fn_HSD_LObjAddCurrent);
/*8006A8E0 000676E0*/ PPC::Runtime::ASM::bl(fn_COBJ_GetCurrent);
/*8006A8E4 000676E4*/ PPC::Runtime::ASM::bl(fn_HSD_LObjSetupInit?);
RUNTIME_PPC_JUMP_LABEL(.L_8006A8E8, 0x8006A8E8) //this is a jump label
/*8006A8E8 000676E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*8006A8EC 000676EC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*8006A8F0 000676F0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*8006A8F4 000676F4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8006A8F8 000676F8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8006A8FC 000676FC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8006A900 00067700*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x90);
/*8006A904 00067704*/ PPC::Runtime::ASM::blr();
}