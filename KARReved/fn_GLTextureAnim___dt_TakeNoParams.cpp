//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_GLTextureAnim___dt_TakeNoParams(PPC::Runtime::GCContext* context)
{
/*80323894 00320694*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80323898 00320698*/ PPC::Runtime::ASM::mflr(context->r0);
/*8032389C 0032069C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803238A0 003206A0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803238A4 003206A4*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*803238A8 003206A8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 803238AC 003206AC  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*803238B0 003206B0*/ PPC::Runtime::ASM::beq(.L_803238D4);
/*803238B4 003206B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803238B8 003206B8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803238BC 003206BC*/ PPC::Runtime::ASM::beq(.L_803238C4);
/*803238C0 003206C0*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_803238C4, 0x803238C4) //this is a jump label
/*803238C4 003206C4*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*803238C8 003206C8*/ PPC::Runtime::ASM::ble(.L_803238D4);
/*803238CC 003206CC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803238D0 003206D0*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_803238D4, 0x803238D4) //this is a jump label
/*803238D4 003206D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803238D8 003206D8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803238DC 003206DC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803238E0 003206E0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803238E4 003206E4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803238E8 003206E8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803238EC 003206EC*/ PPC::Runtime::ASM::blr();
}