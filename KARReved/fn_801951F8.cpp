//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801D6488.hpp"
#include "fn_8019C588.hpp"



void fn_801951F8(PPC::Runtime::GCContext* context)
{
/*801951F8 00191FF8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801951FC 00191FFC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80195200 00192000*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80195204 00192004*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80195208 00192008*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8019520C 0019200C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x826, context->r3));
/* 80195210 00192010  54 00 E7 FF */ extrwi. context->r0 , context->r0 , 1 , 27
/*80195214 00192014*/ PPC::Runtime::ASM::beq(.L_80195238);
/*80195218 00192018*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r31));
/*8019521C 0019201C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80195220 00192020*/ PPC::Runtime::ASM::bl(fn_801D6488);
/*80195224 00192024*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x826, context->r31));
/*80195228 00192028*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8019522C 0019202C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 4, 27, 27);
/*80195230 00192030*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x826, context->r31));
/*80195234 00192034*/ PPC::Runtime::ASM::b(.L_8019523C);
RUNTIME_PPC_JUMP_LABEL(.L_80195238, 0x80195238) //this is a jump label
/*80195238 00192038*/ PPC::Runtime::ASM::bl(fn_8019C588);
RUNTIME_PPC_JUMP_LABEL(.L_8019523C, 0x8019523C) //this is a jump label
/*8019523C 0019203C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80195240 00192040*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80195244 00192044*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80195248 00192048*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8019524C 0019204C*/ PPC::Runtime::ASM::blr();
}