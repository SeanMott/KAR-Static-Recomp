//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_GXSetTevKAlphaSel(PPC::Runtime::GCContext* context)
{
/*803CEF00 003CBD00*/ PPC::Runtime::ASM::srawi(context->r5, context->r3, 1);
/*803CEF04 003CBD04*/ PPC::Runtime::ASM::lwz(context->r6, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/* 803CEF08 003CBD08  54 60 07 FF */ clrlwi. context->r0 , context->r3 , 31
/*803CEF0C 003CBD0C*/ PPC::Runtime::ASM::slwi(context->r3, context->r5, 2);
/*803CEF10 003CBD10*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x1b0);
/*803CEF14 003CBD14*/ PPC::Runtime::ASM::add(context->r7, context->r6, context->r7);
/*803CEF18 003CBD18*/ PPC::Runtime::ASM::beq(.L_803CEF34);
/*803CEF1C 003CBD1C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*803CEF20 003CBD20*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 19);
/*803CEF24 003CBD24*/ PPC::Runtime::ASM::rlwinm(context->r3, context->r3, 0, 13, 7);
/*803CEF28 003CBD28*/ PPC::Runtime::ASM::or(context->r0, context->r3, context->r0);
/*803CEF2C 003CBD2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*803CEF30 003CBD30*/ PPC::Runtime::ASM::b(.L_803CEF48);
RUNTIME_PPC_JUMP_LABEL(.L_803CEF34, 0x803CEF34) //this is a jump label
/*803CEF34 003CBD34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*803CEF38 003CBD38*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 9);
/*803CEF3C 003CBD3C*/ PPC::Runtime::ASM::rlwinm(context->r3, context->r3, 0, 23, 17);
/*803CEF40 003CBD40*/ PPC::Runtime::ASM::or(context->r0, context->r3, context->r0);
/*803CEF44 003CBD44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
RUNTIME_PPC_JUMP_LABEL(.L_803CEF48, 0x803CEF48) //this is a jump label
/*803CEF48 003CBD48*/ PPC::Runtime::ASM::li(context->r0, 0x61);
/*803CEF4C 003CBD4C*/ PPC::Runtime::ASM::lwz(context->r3, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CEF50 003CBD50*/ PPC::Runtime::ASM::lis(context->r5, 0xcc01);
/*803CEF54 003CBD54*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*803CEF58 003CBD58*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803CEF5C 003CBD5C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*803CEF60 003CBD60*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*803CEF64 003CBD64*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*803CEF68 003CBD68*/ PPC::Runtime::ASM::blr();
}