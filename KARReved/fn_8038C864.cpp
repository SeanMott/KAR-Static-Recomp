//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8038C864(PPC::Runtime::GCContext* context)
{
/*8038C864 00389664*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8038C868 00389668*/ PPC::Runtime::ASM::rlwimi(context->r8, context->r4, 0, 0, 29);
/*8038C86C 0038966C*/ PPC::Runtime::ASM::clrlwi(context->r7, context->r7, 24);
/*8038C870 00389670*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8038C874 00389674*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8038C878 00389678*/ PPC::Runtime::ASM::neg(context->r0, context->r7);
/*8038C87C 0038967C*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r7);
/*8038C880 00389680*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8038C884 00389684*/ PPC::Runtime::ASM::rlwimi(context->r7, context->r5, 2, 30, 31);
/*8038C888 00389688*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
/*8038C88C 0038968C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8038C890 00389690*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8038C894 00389694*/ PPC::Runtime::ASM::rlwimi(context->r7, context->r5, 2, 0, 27);
/*8038C898 00389698*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8038C89C 0038969C*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8038C8A0 003896A0*/ PPC::Runtime::ASM::rlwimi(context->r7, context->r6, 1, 28, 30);
/*8038C8A4 003896A4*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8038C8A8 003896A8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8038C8AC 003896AC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 0, 0, 30);
/*8038C8B0 003896B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8038C8B4 003896B4*/ PPC::Runtime::ASM::beq(.L_8038C8D0);
/*8038C8B8 003896B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8038C8BC 003896BC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 2, 30, 31);
/*8038C8C0 003896C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8038C8C4 003896C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8038C8C8 003896C8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 2, 0, 27);
/*8038C8CC 003896CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_8038C8D0, 0x8038C8D0) //this is a jump label
/*8038C8D0 003896D0*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*8038C8D4 003896D4*/ PPC::Runtime::ASM::beqlr();
/*8038C8D8 003896D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8038C8DC 003896DC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 0, 0, 29);
/*8038C8E0 003896E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8038C8E4 003896E4*/ PPC::Runtime::ASM::blr();
}