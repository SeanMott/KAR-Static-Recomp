//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802865CC.hpp"
#include "fn_80286534.hpp"
#include "fn_8028649C.hpp"
#include "fn_80285130.hpp"



void fn_80286404(PPC::Runtime::GCContext* context)
{
/*80286404 00283204*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80286408 00283208*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028640C 0028320C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80286410 00283210*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80286414 00283214*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80286418 00283218*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 8028641C 0028321C  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80286420 00283220*/ PPC::Runtime::ASM::beq(.L_80286480);
/*80286424 00283224*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BBD64 @ Get_MemoryOffset_HighBit);
/*80286428 00283228*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xb1c);
/*8028642C 0028322C*/ PPC::Runtime::ASM::addi(context->r6, context->r4, lbl_804BBD64 @ Get_MemoryOffset_LowBit);
/*80286430 00283230*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*80286434 00283234*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80286438 00283238*/ PPC::Runtime::ASM::addi(context->r5, context->r6, 0x10);
/*8028643C 0028323C*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x58);
/*80286440 00283240*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80286444 00283244*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*80286448 00283248*/ PPC::Runtime::ASM::bl(fn_802865CC);
/*8028644C 0028324C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x664);
/*80286450 00283250*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*80286454 00283254*/ PPC::Runtime::ASM::bl(fn_80286534);
/*80286458 00283258*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1ac);
/*8028645C 0028325C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*80286460 00283260*/ PPC::Runtime::ASM::bl(fn_8028649C);
/*80286464 00283264*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80286468 00283268*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8028646C 0028326C*/ PPC::Runtime::ASM::bl(fn_80285130);
/*80286470 00283270*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*80286474 00283274*/ PPC::Runtime::ASM::ble(.L_80286480);
/*80286478 00283278*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028647C 0028327C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80286480, 0x80286480) //this is a jump label
/*80286480 00283280*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80286484 00283284*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80286488 00283288*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028648C 0028328C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80286490 00283290*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80286494 00283294*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80286498 00283298*/ PPC::Runtime::ASM::blr();
}