//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8024E850(PPC::Runtime::GCContext* context)
{
/*8024E850 0024B650*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a0, context->r3));
/*8024E854 0024B654*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8024E858 0024B658*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1NULL_2 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8024E85C 0024B65C*/ PPC::Runtime::ASM::mulli(context->r4, context->r0, 0x54);
/*8024E860 0024B660*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8024E864 0024B664*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x8);
/*8024E868 0024B668*/ PPC::Runtime::ASM::add(context->r4, context->r5, context->r4);
/*8024E86C 0024B66C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r4));
/*8024E870 0024B670*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8024E874 0024B674*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8024E878 0024B678*/ PPC::Runtime::ASM::bne(.L_8024E884);
/*8024E87C 0024B67C*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*8024E880 0024B680*/ PPC::Runtime::ASM::b(.L_8024E8DC);
RUNTIME_PPC_JUMP_LABEL(.L_8024E884, 0x8024E884) //this is a jump label
/*8024E884 0024B684*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8024E888 0024B688*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*8024E88C 0024B68C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8024E890 0024B690*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8024E894 0024B694*/ PPC::Runtime::ASM::bne(.L_8024E8A0);
/*8024E898 0024B698*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*8024E89C 0024B69C*/ PPC::Runtime::ASM::b(.L_8024E8DC);
RUNTIME_PPC_JUMP_LABEL(.L_8024E8A0, 0x8024E8A0) //this is a jump label
/*8024E8A0 0024B6A0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8024E8A4 0024B6A4*/ PPC::Runtime::ASM::li(context->r6, 0x2);
/*8024E8A8 0024B6A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8024E8AC 0024B6AC*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8024E8B0 0024B6B0*/ PPC::Runtime::ASM::bne(.L_8024E8BC);
/*8024E8B4 0024B6B4*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*8024E8B8 0024B6B8*/ PPC::Runtime::ASM::b(.L_8024E8DC);
RUNTIME_PPC_JUMP_LABEL(.L_8024E8BC, 0x8024E8BC) //this is a jump label
/*8024E8BC 0024B6BC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8024E8C0 0024B6C0*/ PPC::Runtime::ASM::li(context->r6, 0x3);
/*8024E8C4 0024B6C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8024E8C8 0024B6C8*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8024E8CC 0024B6CC*/ PPC::Runtime::ASM::bne(.L_8024E8D8);
/*8024E8D0 0024B6D0*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*8024E8D4 0024B6D4*/ PPC::Runtime::ASM::b(.L_8024E8DC);
RUNTIME_PPC_JUMP_LABEL(.L_8024E8D8, 0x8024E8D8) //this is a jump label
/*8024E8D8 0024B6D8*/ PPC::Runtime::ASM::li(context->r6, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_8024E8DC, 0x8024E8DC) //this is a jump label
/*8024E8DC 0024B6DC*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x0);
/*8024E8E0 0024B6E0*/ PPC::Runtime::ASM::beq(.L_8024E8F0);
/*8024E8E4 0024B6E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r4));
/*8024E8E8 0024B6E8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8024E8EC 0024B6EC*/ PPC::Runtime::ASM::bne(.L_8024E8F8);
RUNTIME_PPC_JUMP_LABEL(.L_8024E8F0, 0x8024E8F0) //this is a jump label
/*8024E8F0 0024B6F0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2C70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8024E8F4 0024B6F4*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8024E8F8, 0x8024E8F8) //this is a jump label
/*8024E8F8 0024B6F8*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
/*8024E8FC 0024B6FC*/ PPC::Runtime::ASM::slwi(context->r0, context->r6, 2);
/*8024E900 0024B700*/ PPC::Runtime::ASM::slwi(context->r3, context->r3, 4);
/*8024E904 0024B704*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1NULL_3 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8024E908 0024B708*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xa4);
/*8024E90C 0024B70C*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*8024E910 0024B710*/ PPC::Runtime::ASM::lfsx(context->f1, context->r4, context->r0);
/*8024E914 0024B714*/ PPC::Runtime::ASM::blr();
}