//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8000A278.hpp"



void fn_801DFE94(PPC::Runtime::GCContext* context)
{
/*801DFE94 001DCC94*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801DFE98 001DCC98*/ PPC::Runtime::ASM::mflr(context->r0);
/*801DFE9C 001DCC9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801DFEA0 001DCCA0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*801DFEA4 001DCCA4*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*801DFEA8 001DCCA8*/ PPC::Runtime::ASM::bl(fn_8000A278);
/*801DFEAC 001DCCAC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801DFEB0 001DCCB0*/ PPC::Runtime::ASM::beq(.L_801DFFBC);
/*801DFEB4 001DCCB4*/ PPC::Runtime::ASM::li(context->r3, 0xb8);
/*801DFEB8 001DCCB8*/ PPC::Runtime::ASM::bl(fn__HSD_MemAlloc);
/*801DFEBC 001DCCBC*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*801DFEC0 001DCCC0*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD868 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DFEC4 001DCCC4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801DFEC8 001DCCC8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801DFECC 001DCCCC*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_801DFED0, 0x801DFED0) //this is a jump label
/*801DFED0 001DCCD0*/ PPC::Runtime::ASM::lwz(context->r7, STRUCT_BYTE4_COUNT_1805DD868 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DFED4 001DCCD4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801DFED8 001DCCD8*/ PPC::Runtime::ASM::addi(context->r6, context->r4, 0x4);
/*801DFEDC 001DCCDC*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*801DFEE0 001DCCE0*/ PPC::Runtime::ASM::stwx(context->r3, context->r7, context->r4);
/*801DFEE4 001DCCE4*/ PPC::Runtime::ASM::addi(context->r27, context->r4, 0x8);
/*801DFEE8 001DCCE8*/ PPC::Runtime::ASM::addi(context->r28, context->r4, 0xc);
/*801DFEEC 001DCCEC*/ PPC::Runtime::ASM::addi(context->r29, context->r4, 0x10);
/*801DFEF0 001DCCF0*/ PPC::Runtime::ASM::lwz(context->r7, STRUCT_BYTE4_COUNT_1805DD868 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DFEF4 001DCCF4*/ PPC::Runtime::ASM::addi(context->r30, context->r4, 0x14);
/*801DFEF8 001DCCF8*/ PPC::Runtime::ASM::addi(context->r31, context->r4, 0x18);
/*801DFEFC 001DCCFC*/ PPC::Runtime::ASM::addi(context->r12, context->r4, 0x1c);
/*801DFF00 001DCD00*/ PPC::Runtime::ASM::stwx(context->r0, context->r7, context->r6);
/*801DFF04 001DCD04*/ PPC::Runtime::ASM::addi(context->r11, context->r4, 0x20);
/*801DFF08 001DCD08*/ PPC::Runtime::ASM::addi(context->r10, context->r4, 0x24);
/*801DFF0C 001DCD0C*/ PPC::Runtime::ASM::addi(context->r9, context->r4, 0x28);
/*801DFF10 001DCD10*/ PPC::Runtime::ASM::lwz(context->r26, STRUCT_BYTE4_COUNT_1805DD868 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DFF14 001DCD14*/ PPC::Runtime::ASM::addi(context->r8, context->r4, 0x2c);
/*801DFF18 001DCD18*/ PPC::Runtime::ASM::addi(context->r7, context->r4, 0x30);
/*801DFF1C 001DCD1C*/ PPC::Runtime::ASM::addi(context->r6, context->r4, 0x34);
/*801DFF20 001DCD20*/ PPC::Runtime::ASM::stwx(context->r3, context->r26, context->r27);
/*801DFF24 001DCD24*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x38);
/*801DFF28 001DCD28*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x7);
/*801DFF2C 001DCD2C*/ PPC::Runtime::ASM::lwz(context->r27, STRUCT_BYTE4_COUNT_1805DD868 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DFF30 001DCD30*/ PPC::Runtime::ASM::stwx(context->r0, context->r27, context->r28);
/*801DFF34 001DCD34*/ PPC::Runtime::ASM::lwz(context->r28, STRUCT_BYTE4_COUNT_1805DD868 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DFF38 001DCD38*/ PPC::Runtime::ASM::stwx(context->r3, context->r28, context->r29);
/*801DFF3C 001DCD3C*/ PPC::Runtime::ASM::lwz(context->r29, STRUCT_BYTE4_COUNT_1805DD868 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DFF40 001DCD40*/ PPC::Runtime::ASM::stwx(context->r0, context->r29, context->r30);
/*801DFF44 001DCD44*/ PPC::Runtime::ASM::lwz(context->r30, STRUCT_BYTE4_COUNT_1805DD868 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DFF48 001DCD48*/ PPC::Runtime::ASM::stwx(context->r3, context->r30, context->r31);
/*801DFF4C 001DCD4C*/ PPC::Runtime::ASM::lwz(context->r31, STRUCT_BYTE4_COUNT_1805DD868 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DFF50 001DCD50*/ PPC::Runtime::ASM::stwx(context->r0, context->r31, context->r12);
/*801DFF54 001DCD54*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DD868 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DFF58 001DCD58*/ PPC::Runtime::ASM::stwx(context->r3, context->r12, context->r11);
/*801DFF5C 001DCD5C*/ PPC::Runtime::ASM::lwz(context->r11, STRUCT_BYTE4_COUNT_1805DD868 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DFF60 001DCD60*/ PPC::Runtime::ASM::stwx(context->r0, context->r11, context->r10);
/*801DFF64 001DCD64*/ PPC::Runtime::ASM::lwz(context->r10, STRUCT_BYTE4_COUNT_1805DD868 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DFF68 001DCD68*/ PPC::Runtime::ASM::stwx(context->r3, context->r10, context->r9);
/*801DFF6C 001DCD6C*/ PPC::Runtime::ASM::lwz(context->r9, STRUCT_BYTE4_COUNT_1805DD868 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DFF70 001DCD70*/ PPC::Runtime::ASM::stwx(context->r0, context->r9, context->r8);
/*801DFF74 001DCD74*/ PPC::Runtime::ASM::lwz(context->r8, STRUCT_BYTE4_COUNT_1805DD868 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DFF78 001DCD78*/ PPC::Runtime::ASM::stwx(context->r3, context->r8, context->r7);
/*801DFF7C 001DCD7C*/ PPC::Runtime::ASM::lwz(context->r7, STRUCT_BYTE4_COUNT_1805DD868 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DFF80 001DCD80*/ PPC::Runtime::ASM::stwx(context->r0, context->r7, context->r6);
/*801DFF84 001DCD84*/ PPC::Runtime::ASM::bdnz(.L_801DFED0);
/*801DFF88 001DCD88*/ PPC::Runtime::ASM::subfic(context->r4, context->r5, 0x17);
/*801DFF8C 001DCD8C*/ PPC::Runtime::ASM::slwi(context->r6, context->r5, 3);
/*801DFF90 001DCD90*/ PPC::Runtime::ASM::mtctr(context->r4);
/*801DFF94 001DCD94*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x17);
/*801DFF98 001DCD98*/ PPC::Runtime::ASM::bge(.L_801DFFC4);
RUNTIME_PPC_JUMP_LABEL(.L_801DFF9C, 0x801DFF9C) //this is a jump label
/*801DFF9C 001DCD9C*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD868 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DFFA0 001DCDA0*/ PPC::Runtime::ASM::addi(context->r4, context->r6, 0x4);
/*801DFFA4 001DCDA4*/ PPC::Runtime::ASM::stwx(context->r3, context->r5, context->r6);
/*801DFFA8 001DCDA8*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x8);
/*801DFFAC 001DCDAC*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD868 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DFFB0 001DCDB0*/ PPC::Runtime::ASM::stwx(context->r0, context->r5, context->r4);
/*801DFFB4 001DCDB4*/ PPC::Runtime::ASM::bdnz(.L_801DFF9C);
/*801DFFB8 001DCDB8*/ PPC::Runtime::ASM::b(.L_801DFFC4);
RUNTIME_PPC_JUMP_LABEL(.L_801DFFBC, 0x801DFFBC) //this is a jump label
/*801DFFBC 001DCDBC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801DFFC0 001DCDC0*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD868 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_801DFFC4, 0x801DFFC4) //this is a jump label
/*801DFFC4 001DCDC4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*801DFFC8 001DCDC8*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*801DFFCC 001DCDCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801DFFD0 001DCDD0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801DFFD4 001DCDD4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801DFFD8 001DCDD8*/ PPC::Runtime::ASM::blr();
}