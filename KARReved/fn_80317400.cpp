//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80317400(PPC::Runtime::GCContext* context)
{
/*80317400 00314200*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80317404 00314204*/ PPC::Runtime::ASM::mflr(context->r0);
/*80317408 00314208*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8031740C 0031420C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80317410 00314210*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80317414 00314214*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80317418 00314218*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/* 8031741C 0031421C  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*80317420 00314220*/ PPC::Runtime::ASM::beq(.L_803174C4);
/*80317424 00314224*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80317428 00314228*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8031742C 0031422C*/ PPC::Runtime::ASM::beq(.L_80317454);
/*80317430 00314230*/ PPC::Runtime::ASM::beq(.L_80317454);
/*80317434 00314234*/ PPC::Runtime::ASM::beq(.L_8031744C);
/*80317438 00314238*/ PPC::Runtime::ASM::beq(.L_8031744C);
/*8031743C 0031423C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80317440 00314240*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80317444 00314244*/ PPC::Runtime::ASM::beq(.L_8031744C);
/*80317448 00314248*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8031744C, 0x8031744C) //this is a jump label
/*8031744C 0031424C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80317450 00314250*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80317454, 0x80317454) //this is a jump label
/*80317454 00314254*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*80317458 00314258*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8031745C 0031425C*/ PPC::Runtime::ASM::beq(.L_80317484);
/*80317460 00314260*/ PPC::Runtime::ASM::beq(.L_80317484);
/*80317464 00314264*/ PPC::Runtime::ASM::beq(.L_8031747C);
/*80317468 00314268*/ PPC::Runtime::ASM::beq(.L_8031747C);
/*8031746C 0031426C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80317470 00314270*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80317474 00314274*/ PPC::Runtime::ASM::beq(.L_8031747C);
/*80317478 00314278*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8031747C, 0x8031747C) //this is a jump label
/*8031747C 0031427C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80317480 00314280*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80317484, 0x80317484) //this is a jump label
/*80317484 00314284*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*80317488 00314288*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8031748C 0031428C*/ PPC::Runtime::ASM::beq(.L_803174B4);
/*80317490 00314290*/ PPC::Runtime::ASM::beq(.L_803174B4);
/*80317494 00314294*/ PPC::Runtime::ASM::beq(.L_803174AC);
/*80317498 00314298*/ PPC::Runtime::ASM::beq(.L_803174AC);
/*8031749C 0031429C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803174A0 003142A0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803174A4 003142A4*/ PPC::Runtime::ASM::beq(.L_803174AC);
/*803174A8 003142A8*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_803174AC, 0x803174AC) //this is a jump label
/*803174AC 003142AC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803174B0 003142B0*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_803174B4, 0x803174B4) //this is a jump label
/*803174B4 003142B4*/ PPC::Runtime::ASM::extsh.(context->r0, context->r30);
/*803174B8 003142B8*/ PPC::Runtime::ASM::ble(.L_803174C4);
/*803174BC 003142BC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803174C0 003142C0*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_803174C4, 0x803174C4) //this is a jump label
/*803174C4 003142C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803174C8 003142C8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803174CC 003142CC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803174D0 003142D0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803174D4 003142D4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803174D8 003142D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803174DC 003142DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803174E0 003142E0*/ PPC::Runtime::ASM::blr();
}