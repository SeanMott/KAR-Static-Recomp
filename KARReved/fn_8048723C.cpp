//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803EB940.hpp"
#include "fn_SOInit.hpp"



void fn_8048723C(PPC::Runtime::GCContext* context)
{
/*8048723C 0048403C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80487240 00484040*/ PPC::Runtime::ASM::mflr(context->r0);
/*80487244 00484044*/ PPC::Runtime::ASM::lis(context->r4, SKIP_ADDRESS_1 @ Get_MemoryOffset_HighBit);
/*80487248 00484048*/ PPC::Runtime::ASM::lis(context->r3, BIG_NULL_VALUE_STRUCT @ Get_MemoryOffset_HighBit);
/*8048724C 0048404C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80487250 00484050*/ PPC::Runtime::ASM::addi(context->r4, context->r4, SKIP_ADDRESS_1 @ Get_MemoryOffset_LowBit);
/*80487254 00484054*/ PPC::Runtime::ASM::li(context->r0, 0x1091);
/*80487258 00484058*/ PPC::Runtime::ASM::addi(context->r3, context->r3, BIG_NULL_VALUE_STRUCT @ Get_MemoryOffset_LowBit);
/*8048725C 0048405C*/ PPC::Runtime::ASM::subi(context->r5, context->r4, 0x4);
/*80487260 00484060*/ PPC::Runtime::ASM::subi(context->r4, context->r3, 0x4);
/*80487264 00484064*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80487268, 0x80487268) //this is a jump label
/*80487268 00484068*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8048726C 0048406C*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80487270 00484070*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80487274 00484074*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80487278 00484078*/ PPC::Runtime::ASM::bdnz(.L_80487268);
/*8048727C 0048407C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80487280 00484080*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80487284 00484084*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80487288 00484088*/ PPC::Runtime::ASM::bl(fn_803EB940);
/*8048728C 0048408C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80487290 00484090*/ PPC::Runtime::ASM::beq(.L_804872A4);
/*80487294 00484094*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80487298 00484098*/ PPC::Runtime::ASM::subis(context->r0, context->r3, 0x402);
/*8048729C 0048409C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x200);
/*804872A0 004840A0*/ PPC::Runtime::ASM::beq(.L_804872AC);
RUNTIME_PPC_JUMP_LABEL(.L_804872A4, 0x804872A4) //this is a jump label
/*804872A4 004840A4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*804872A8 004840A8*/ PPC::Runtime::ASM::b(.L_804872B0);
RUNTIME_PPC_JUMP_LABEL(.L_804872AC, 0x804872AC) //this is a jump label
/*804872AC 004840AC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_804872B0, 0x804872B0) //this is a jump label
/*804872B0 004840B0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*804872B4 004840B4*/ PPC::Runtime::ASM::bne(.L_804872BC);
/*804872B8 004840B8*/ PPC::Runtime::ASM::bl(fn_SOInit);
RUNTIME_PPC_JUMP_LABEL(.L_804872BC, 0x804872BC) //this is a jump label
/*804872BC 004840BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804872C0 004840C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804872C4 004840C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*804872C8 004840C8*/ PPC::Runtime::ASM::blr();
}