//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80276228(PPC::Runtime::GCContext* context)
{
/*80276228 00273028*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8027622C 0027302C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80276230 00273030*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80276234 00273034*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80276238 00273038*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8027623C 0027303C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x778, context->r3));
/*80276240 00273040*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B7A58 @ Get_MemoryOffset_HighBit);
/*80276244 00273044*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_804B7A58 @ Get_MemoryOffset_LowBit);
/*80276248 00273048*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r30));
/*8027624C 0027304C*/ PPC::Runtime::ASM::addi(context->r0, context->r30, 0x19c);
/*80276250 00273050*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*80276254 00273054*/ PPC::Runtime::ASM::blt(.L_80276274);
/*80276258 00273058*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xac);
/*8027625C 0027305C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80276260 00273060*/ PPC::Runtime::ASM::bl(OSReport);
/*80276264 00273064*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1c);
/*80276268 00273068*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x68);
/*8027626C 0027306C*/ PPC::Runtime::ASM::li(context->r4, 0x96);
/*80276270 00273070*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80276274, 0x80276274) //this is a jump label
/*80276274 00273074*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r30));
/*80276278 00273078*/ PPC::Runtime::ASM::li(context->r5, 0x7f);
/*8027627C 0027307C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x11c);
/*80276280 00273080*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80276284 00273084*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80276288 00273088*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r30));
/*8027628C 0027308C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*80276290 00273090*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r30));
/*80276294 00273094*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r30));
/*80276298 00273098*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r30));
/*8027629C 0027309C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802762A0 002730A0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802762A4 002730A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802762A8 002730A8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802762AC 002730AC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802762B0 002730B0*/ PPC::Runtime::ASM::blr();
}