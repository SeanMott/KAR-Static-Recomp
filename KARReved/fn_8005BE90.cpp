//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8005BE90(PPC::Runtime::GCContext* context)
{
/*8005BE90 00058C90*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*8005BE94 00058C94*/ PPC::Runtime::ASM::li(context->r0, 0x10);
/*8005BE98 00058C98*/ PPC::Runtime::ASM::addi(context->r5, context->r4, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*8005BE9C 00058C9C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8005BEA0 00058CA0*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8005BEA4, 0x8005BEA4) //this is a jump label
/*8005BEA4 00058CA4*/ PPC::Runtime::ASM::addis(context->r4, context->r5, 0x1);
/*8005BEA8 00058CA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7388, context->r4));
/*8005BEAC 00058CAC*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*8005BEB0 00058CB0*/ PPC::Runtime::ASM::bne(.L_8005BED4);
/*8005BEB4 00058CB4*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*8005BEB8 00058CB8*/ PPC::Runtime::ASM::slwi(context->r0, context->r6, 4);
/*8005BEBC 00058CBC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*8005BEC0 00058CC0*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8005BEC4 00058CC4*/ PPC::Runtime::ASM::addis(context->r3, context->r3, 0x1);
/*8005BEC8 00058CC8*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8005BECC 00058CCC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x738c, context->r3));
/*8005BED0 00058CD0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8005BED4, 0x8005BED4) //this is a jump label
/*8005BED4 00058CD4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x10);
/*8005BED8 00058CD8*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*8005BEDC 00058CDC*/ PPC::Runtime::ASM::bdnz(.L_8005BEA4);
/*8005BEE0 00058CE0*/ PPC::Runtime::ASM::blr();
}