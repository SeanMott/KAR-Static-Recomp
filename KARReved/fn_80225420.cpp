//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801921F8.hpp"
#include "fn_80191FFC.hpp"
#include "fn_80191B4C.hpp"
#include "fn_80191F18.hpp"
#include "fn_80064DAC.hpp"
#include "fn_80220250.hpp"



void fn_80225420(PPC::Runtime::GCContext* context)
{
/*80225420 00222220*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80225424 00222224*/ PPC::Runtime::ASM::mflr(context->r0);
/*80225428 00222228*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8022542C 0022222C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80225430 00222230*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80225434 00222234*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80225438 00222238*/ PPC::Runtime::ASM::bl(fn_801921F8);
/*8022543C 0022223C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r31));
/*80225440 00222240*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xac);
/*80225444 00222244*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80225448 00222248*/ PPC::Runtime::ASM::bl(fn_80191FFC);
/*8022544C 0022224C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80225450 00222250*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80225454 00222254*/ PPC::Runtime::ASM::bl(fn_80191B4C);
/*80225458 00222258*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8022545C 0022225C*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*80225460 00222260*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*80225464 00222264*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80225468 00222268*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8022546C 0022226C*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80225470 00222270*/ PPC::Runtime::ASM::bne(.L_802254A0);
/*80225474 00222274*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2944 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80225478 00222278*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8022547C 0022227C*/ PPC::Runtime::ASM::fdivs(context->f1, context->f2, context->f1);
/*80225480 00222280*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80225484 00222284*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r31));
/*80225488 00222288*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022548C 0022228C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80225490 00222290*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r31));
/*80225494 00222294*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80225498 00222298*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8022549C 0022229C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802254A0, 0x802254A0) //this is a jump label
/*802254A0 002222A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802254A4 002222A4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*802254A8 002222A8*/ PPC::Runtime::ASM::bl(fn_80191F18);
/*802254AC 002222AC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r31));
/*802254B0 002222B0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802254B4 002222B4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r31));
/*802254B8 002222B8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*802254BC 002222BC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802254C0 002222C0*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r31));
/*802254C4 002222C4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802254C8 002222C8*/ PPC::Runtime::ASM::fmadds(context->f2, context->f2, context->f1, context->f0);
/*802254CC 002222CC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2940 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802254D0 002222D0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2944 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802254D4 002222D4*/ PPC::Runtime::ASM::fmadds(context->f2, context->f4, context->f3, context->f2);
/*802254D8 002222D8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*802254DC 002222DC*/ PPC::Runtime::ASM::bge(.L_802254E4);
/*802254E0 002222E0*/ PPC::Runtime::ASM::fneg(context->f2, context->f2);
RUNTIME_PPC_JUMP_LABEL(.L_802254E4, 0x802254E4) //this is a jump label
/*802254E4 002222E4*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*802254E8 002222E8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2948 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802254EC 002222EC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802254F0 002222F0*/ PPC::Runtime::ASM::bge(.L_80225500);
/*802254F4 002222F4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xd0);
/*802254F8 002222F8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*802254FC 002222FC*/ PPC::Runtime::ASM::bl(fn_80064DAC);
RUNTIME_PPC_JUMP_LABEL(.L_80225500, 0x80225500) //this is a jump label
/*80225500 00222300*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80225504 00222304*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xd0);
/*80225508 00222308*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*8022550C 0022230C*/ PPC::Runtime::ASM::bl(fn_80220250);
/*80225510 00222310*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80225514 00222314*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80225518 00222318*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022551C 0022231C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80225520 00222320*/ PPC::Runtime::ASM::blr();
}