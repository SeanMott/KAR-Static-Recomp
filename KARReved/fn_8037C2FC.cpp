//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8037C2FC(PPC::Runtime::GCContext* context)
{
/*8037C2FC 003790FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8037C300 00379100*/ PPC::Runtime::ASM::mflr(context->r0);
/*8037C304 00379104*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4B80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037C308 00379108*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037C30C 0037910C*/ PPC::Runtime::ASM::li(context->r0, 0x7531);
/*8037C310 00379110*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8037C314 00379114*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8037C318 00379118*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8037C31C 0037911C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037C320 00379120*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*8037C324 00379124*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r31));
/*8037C328 00379128*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe9, context->r31));
/*8037C32C 0037912C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x200, context->r31));
/*8037C330 00379130*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x204, context->r31));
/*8037C334 00379134*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bc, context->r31));
/*8037C338 00379138*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8037C33C 0037913C*/ PPC::Runtime::ASM::beq(.L_8037C354);
/*8037C340 00379140*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r31));
/*8037C344 00379144*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8037C348 00379148*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*8037C34C 0037914C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8037C350 00379150*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bc, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8037C354, 0x8037C354) //this is a jump label
/*8037C354 00379154*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037C358 00379158*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*8037C35C 0037915C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18c, context->r31));
/*8037C360 00379160*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4B64 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037C364 00379164*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x208, context->r31));
/*8037C368 00379168*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4B80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037C36C 0037916C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20c, context->r31));
/*8037C370 00379170*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x214, context->r31));
/*8037C374 00379174*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x218, context->r31));
/*8037C378 00379178*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x210, context->r31));
/*8037C37C 0037917C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8037C380 00379180*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037C384 00379184*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8037C388 00379188*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8037C38C 0037918C*/ PPC::Runtime::ASM::blr();
}