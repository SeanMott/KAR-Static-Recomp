//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80247800(PPC::Runtime::GCContext* context)
{
/*80247800 00244600*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x44);
/*80247804 00244604*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80247808 00244608*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r3));
/*8024780C 0024460C*/ PPC::Runtime::ASM::mr(context->r8, context->r7);
/*80247810 00244610*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80247814 00244614*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80247818 00244618*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8024781C 0024461C*/ PPC::Runtime::ASM::ble(.L_8024785C);
RUNTIME_PPC_JUMP_LABEL(.L_80247820, 0x80247820) //this is a jump label
/*80247820 00244620*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*80247824 00244624*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r5));
/*80247828 00244628*/ PPC::Runtime::ASM::mulli(context->r3, context->r0, 0x140);
/*8024782C 0024462C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x24);
/*80247830 00244630*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*80247834 00244634*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 7);
/*80247838 00244638*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x23);
/*8024783C 0024463C*/ PPC::Runtime::ASM::bne(.L_80247850);
/*80247840 00244640*/ PPC::Runtime::ASM::slwi(context->r0, context->r6, 2);
/*80247844 00244644*/ PPC::Runtime::ASM::add(context->r3, context->r7, context->r0);
/*80247848 00244648*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8024784C 0024464C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80247850, 0x80247850) //this is a jump label
/*80247850 00244650*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x4);
/*80247854 00244654*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*80247858 00244658*/ PPC::Runtime::ASM::bdnz(.L_80247820);
RUNTIME_PPC_JUMP_LABEL(.L_8024785C, 0x8024785C) //this is a jump label
/*8024785C 0024465C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d8, context->r7));
/*80247860 00244660*/ PPC::Runtime::ASM::mr(context->r6, context->r7);
/*80247864 00244664*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80247868 00244668*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8024786C 0024466C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80247870 00244670*/ PPC::Runtime::ASM::ble(.L_802478BC);
RUNTIME_PPC_JUMP_LABEL(.L_80247874, 0x80247874) //this is a jump label
/*80247874 00244674*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r6));
/*80247878 00244678*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r6));
/*8024787C 0024467C*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0x140);
/*80247880 00244680*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r5));
/*80247884 00244684*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x24);
/*80247888 00244688*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8024788C 0024468C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x24);
/*80247890 00244690*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*80247894 00244694*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 7);
/*80247898 00244698*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x23);
/*8024789C 0024469C*/ PPC::Runtime::ASM::bne(.L_802478B0);
/*802478A0 002446A0*/ PPC::Runtime::ASM::slwi(context->r0, context->r8, 5);
/*802478A4 002446A4*/ PPC::Runtime::ASM::add(context->r3, context->r7, context->r0);
/*802478A8 002446A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*802478AC 002446AC*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_802478B0, 0x802478B0) //this is a jump label
/*802478B0 002446B0*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x20);
/*802478B4 002446B4*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
/*802478B8 002446B8*/ PPC::Runtime::ASM::bdnz(.L_80247874);
RUNTIME_PPC_JUMP_LABEL(.L_802478BC, 0x802478BC) //this is a jump label
/*802478BC 002446BC*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*802478C0 002446C0*/ PPC::Runtime::ASM::blr();
}