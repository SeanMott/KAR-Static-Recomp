//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn___destroy_arr(PPC::Runtime::GCContext* context)
{
/*803AD248 003AA048*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803AD24C 003AA04C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803AD250 003AA050*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803AD254 003AA054*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803AD258 003AA058*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803AD25C 003AA05C*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*803AD260 003AA060*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803AD264 003AA064*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*803AD268 003AA068*/ PPC::Runtime::ASM::mullw(context->r0, context->r29, context->r30);
/*803AD26C 003AA06C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803AD270 003AA070*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*803AD274 003AA074*/ PPC::Runtime::ASM::add(context->r31, context->r3, context->r0);
/*803AD278 003AA078*/ PPC::Runtime::ASM::b(.L_803AD298);
RUNTIME_PPC_JUMP_LABEL(.L_803AD27C, 0x803AD27C) //this is a jump label
/*803AD27C 003AA07C*/ PPC::Runtime::ASM::subf(context->r31, context->r29, context->r31);
/*803AD280 003AA080*/ PPC::Runtime::ASM::mr(context->r12, context->r28);
/*803AD284 003AA084*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803AD288 003AA088*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*803AD28C 003AA08C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803AD290 003AA090*/ PPC::Runtime::ASM::bctrl();
/*803AD294 003AA094*/ PPC::Runtime::ASM::subi(context->r30, context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803AD298, 0x803AD298) //this is a jump label
/*803AD298 003AA098*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*803AD29C 003AA09C*/ PPC::Runtime::ASM::bne(.L_803AD27C);
/*803AD2A0 003AA0A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803AD2A4 003AA0A4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803AD2A8 003AA0A8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803AD2AC 003AA0AC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803AD2B0 003AA0B0*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803AD2B4 003AA0B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803AD2B8 003AA0B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803AD2BC 003AA0BC*/ PPC::Runtime::ASM::blr();
}