//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802813CC(PPC::Runtime::GCContext* context)
{
/*802813CC 0027E1CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802813D0 0027E1D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802813D4 0027E1D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802813D8 0027E1D8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802813DC 0027E1DC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802813E0 0027E1E0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/* 802813E4 0027E1E4  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*802813E8 0027E1E8*/ PPC::Runtime::ASM::beq(.L_80281494);
/*802813EC 0027E1EC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r29));
/*802813F0 0027E1F0*/ PPC::Runtime::ASM::b(.L_80281484);
RUNTIME_PPC_JUMP_LABEL(.L_802813F4, 0x802813F4) //this is a jump label
/*802813F4 0027E1F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802813F8 0027E1F8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802813FC 0027E1FC*/ PPC::Runtime::ASM::beq(.L_80281404);
/*80281400 0027E200*/ PPC::Runtime::ASM::bl(fn_HSD_JObjUnref);
RUNTIME_PPC_JUMP_LABEL(.L_80281404, 0x80281404) //this is a jump label
/*80281404 0027E204*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80281408 0027E208*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028140C 0027E20C*/ PPC::Runtime::ASM::beq(.L_80281414);
/*80281410 0027E210*/ PPC::Runtime::ASM::bl(fn_HSD_JObjUnref);
RUNTIME_PPC_JUMP_LABEL(.L_80281414, 0x80281414) //this is a jump label
/*80281414 0027E214*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80281418 0027E218*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028141C 0027E21C*/ PPC::Runtime::ASM::beq(.L_80281424);
/*80281420 0027E220*/ PPC::Runtime::ASM::bl(fn_HSD_JObjUnref);
RUNTIME_PPC_JUMP_LABEL(.L_80281424, 0x80281424) //this is a jump label
/*80281424 0027E224*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD918 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80281428 0027E228*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8028142C 0027E22C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80281430 0027E230*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r3));
/*80281434 0027E234*/ PPC::Runtime::ASM::b(.L_80281474);
RUNTIME_PPC_JUMP_LABEL(.L_80281438, 0x80281438) //this is a jump label
/*80281438 0027E238*/ PPC::Runtime::ASM::cmplw(context->r5, context->r30);
/*8028143C 0027E23C*/ PPC::Runtime::ASM::bne(.L_8028146C);
/*80281440 0027E240*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80281444 0027E244*/ PPC::Runtime::ASM::beq(.L_80281454);
/*80281448 0027E248*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r5));
/*8028144C 0027E24C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*80281450 0027E250*/ PPC::Runtime::ASM::b(.L_8028145C);
RUNTIME_PPC_JUMP_LABEL(.L_80281454, 0x80281454) //this is a jump label
/*80281454 0027E254*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r5));
/*80281458 0027E258*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8028145C, 0x8028145C) //this is a jump label
/*8028145C 0027E25C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r5));
/*80281460 0027E260*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80281464 0027E264*/ PPC::Runtime::ASM::bl(fn_HSD_Free);
/*80281468 0027E268*/ PPC::Runtime::ASM::b(.L_80281480);
RUNTIME_PPC_JUMP_LABEL(.L_8028146C, 0x8028146C) //this is a jump label
/*8028146C 0027E26C*/ PPC::Runtime::ASM::mr(context->r4, context->r5);
/*80281470 0027E270*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_80281474, 0x80281474) //this is a jump label
/*80281474 0027E274*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*80281478 0027E278*/ PPC::Runtime::ASM::bne(.L_80281438);
/*8028147C 0027E27C*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80281480, 0x80281480) //this is a jump label
/*80281480 0027E280*/ PPC::Runtime::ASM::mr(context->r30, context->r31);
RUNTIME_PPC_JUMP_LABEL(.L_80281484, 0x80281484) //this is a jump label
/*80281484 0027E284*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80281488 0027E288*/ PPC::Runtime::ASM::bne(.L_802813F4);
/*8028148C 0027E28C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r29));
/*80281490 0027E290*/ PPC::Runtime::ASM::bl(fn_80428F64);
RUNTIME_PPC_JUMP_LABEL(.L_80281494, 0x80281494) //this is a jump label
/*80281494 0027E294*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80281498 0027E298*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8028149C 0027E29C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802814A0 0027E2A0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802814A4 0027E2A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802814A8 0027E2A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802814AC 0027E2AC*/ PPC::Runtime::ASM::blr();
}