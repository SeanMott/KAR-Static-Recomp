//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_804287DC(PPC::Runtime::GCContext* context)
{
/*804287DC 004255DC*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18058C1F4 @ Get_MemoryOffset_HighBit);
/*804287E0 004255E0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*804287E4 004255E4*/ PPC::Runtime::ASM::lbz(context->r0, STRUCT_BYTE4_COUNT_18058C1F4 @ Get_MemoryOffset_LowBit ( context->r4 ));
/*804287E8 004255E8*/ PPC::Runtime::ASM::lbz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/* 804287EC 004255EC  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*804287F0 004255F0*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r5));
/*804287F4 004255F4*/ PPC::Runtime::ASM::beq(.L_8042880C);
/*804287F8 004255F8*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE338 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804287FC 004255FC*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*80428800 00425600*/ PPC::Runtime::ASM::bne(.L_8042880C);
/*80428804 00425604*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80428808 00425608*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE338 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8042880C, 0x8042880C) //this is a jump label
/*8042880C 0042560C*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18058C190 @ Get_MemoryOffset_HighBit);
/*80428810 00425610*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DE34C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80428814 00425614*/ PPC::Runtime::ASM::addi(context->r4, context->r4, STRUCT_BYTE4_COUNT_18058C190 @ Get_MemoryOffset_LowBit);
/*80428818 00425618*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8042881C 0042561C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*80428820 00425620*/ PPC::Runtime::ASM::mullw(context->r0, context->r9, context->r0);
/*80428824 00425624*/ PPC::Runtime::ASM::add(context->r0, context->r8, context->r0);
/*80428828 00425628*/ PPC::Runtime::ASM::slwi(context->r5, context->r0, 2);
/*8042882C 0042562C*/ PPC::Runtime::ASM::lwzx(context->r0, context->r6, context->r5);
/*80428830 00425630*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*80428834 00425634*/ PPC::Runtime::ASM::bne(.L_80428864);
/*80428838 00425638*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8042883C 0042563C*/ PPC::Runtime::ASM::cmplwi(context->r7, 0x0);
/*80428840 00425640*/ PPC::Runtime::ASM::beq(.L_8042885C);
/*80428844 00425644*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r7));
/*80428848 00425648*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*8042884C 0042564C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r8);
/*80428850 00425650*/ PPC::Runtime::ASM::bne(.L_8042885C);
/*80428854 00425654*/ PPC::Runtime::ASM::stwx(context->r7, context->r6, context->r5);
/*80428858 00425658*/ PPC::Runtime::ASM::b(.L_80428864);
RUNTIME_PPC_JUMP_LABEL(.L_8042885C, 0x8042885C) //this is a jump label
/*8042885C 0042565C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80428860 00425660*/ PPC::Runtime::ASM::stwx(context->r0, context->r6, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_80428864, 0x80428864) //this is a jump label
/*80428864 00425664*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80428868 00425668*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8042886C 0042566C*/ PPC::Runtime::ASM::beq(.L_8042887C);
/*80428870 00425670*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80428874 00425674*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80428878 00425678*/ PPC::Runtime::ASM::b(.L_8042888C);
RUNTIME_PPC_JUMP_LABEL(.L_8042887C, 0x8042887C) //this is a jump label
/*8042887C 0042567C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80428880 00425680*/ PPC::Runtime::ASM::slwi(context->r0, context->r9, 2);
/*80428884 00425684*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE348 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80428888 00425688*/ PPC::Runtime::ASM::stwx(context->r5, context->r4, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8042888C, 0x8042888C) //this is a jump label
/*8042888C 0042568C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80428890 00425690*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80428894 00425694*/ PPC::Runtime::ASM::beqlr();
/*80428898 00425698*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8042889C 0042569C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*804288A0 004256A0*/ PPC::Runtime::ASM::blr();
}