//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8030C868(PPC::Runtime::GCContext* context)
{
/*8030C868 00309668*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8030C86C 0030966C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8030C870 00309670*/ PPC::Runtime::ASM::li(context->r5, 0xff);
/*8030C874 00309674*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8030C878 00309678*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8030C87C 0030967C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8030C880 00309680*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8030C884 00309684*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
/*8030C888 00309688*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*8030C88C 0030968C*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r1));
/*8030C890 00309690*/ PPC::Runtime::ASM::lwzu(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8030C894 00309694*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8030C898 00309698*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8030C89C 0030969C*/ PPC::Runtime::ASM::bctrl();
/*8030C8A0 003096A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8030C8A4 003096A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8030C8A8 003096A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8030C8AC 003096AC*/ PPC::Runtime::ASM::blr();
}