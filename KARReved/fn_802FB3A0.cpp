//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802D4678.hpp"
#include "fn_802E99F8.hpp"
#include "fn_80379784.hpp"
#include "fn_80319BDC.hpp"
#include "fn_802FE674.hpp"



void fn_802FB3A0(PPC::Runtime::GCContext* context)
{
/*802FB3A0 002F81A0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x90, context->r1));
/*802FB3A4 002F81A4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802FB3A8 002F81A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*802FB3AC 002F81AC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*802FB3B0 002F81B0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802FB3B4 002F81B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802FB3B8 002F81B8*/ PPC::Runtime::ASM::bl(fn_802D4678);
/*802FB3BC 002F81BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802FB3C0 002F81C0*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*802FB3C4 002F81C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*802FB3C8 002F81C8*/ PPC::Runtime::ASM::cmplw(context->r3, context->r6);
/*802FB3CC 002F81CC*/ PPC::Runtime::ASM::bge(.L_802FB42C);
/*802FB3D0 002F81D0*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*802FB3D4 002F81D4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*802FB3D8 002F81D8*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E3B08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FB3DC 002F81DC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*802FB3E0 002F81E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*802FB3E4 002F81E4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x4c);
/*802FB3E8 002F81E8*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x34);
/*802FB3EC 002F81EC*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*802FB3F0 002F81F0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*802FB3F4 002F81F4*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f2);
/*802FB3F8 002F81F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*802FB3FC 002F81FC*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*802FB400 002F8200*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*802FB404 002F8204*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f0);
/*802FB408 002F8208*/ PPC::Runtime::ASM::bl(fn_802E99F8);
/*802FB40C 002F820C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802FB410 002F8210*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802FB414 002F8214*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802FB418 002F8218*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802FB41C 002F821C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*802FB420 002F8220*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802FB424 002F8224*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*802FB428 002F8228*/ PPC::Runtime::ASM::b(.L_802FB56C);
RUNTIME_PPC_JUMP_LABEL(.L_802FB42C, 0x802FB42C) //this is a jump label
/*802FB42C 002F822C*/ PPC::Runtime::ASM::bne(.L_802FB444);
/*802FB430 002F8230*/ PPC::Runtime::ASM::lis(context->r4, 0x6);
/*802FB434 002F8234*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x5c);
/*802FB438 002F8238*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0xe);
/*802FB43C 002F823C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802FB440 002F8240*/ PPC::Runtime::ASM::bl(fn_80379784);
RUNTIME_PPC_JUMP_LABEL(.L_802FB444, 0x802FB444) //this is a jump label
/*802FB444 002F8244*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*802FB448 002F8248*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x40);
/*802FB44C 002F824C*/ PPC::Runtime::ASM::bl(fn_80319BDC);
/*802FB450 002F8250*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802FB454 002F8254*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*802FB458 002F8258*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3AD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FB45C 002F825C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*802FB460 002F8260*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*802FB464 002F8264*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*802FB468 002F8268*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*802FB46C 002F826C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*802FB470 002F8270*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802FB474 002F8274*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*802FB478 002F8278*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802FB47C 002F827C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x14);
/*802FB480 002F8280*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*802FB484 002F8284*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3AD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FB488 002F8288*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f2);
/*802FB48C 002F828C*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*802FB490 002F8290*/ PPC::Runtime::ASM::beq(.L_802FB4A8);
/*802FB494 002F8294*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802FB498 002F8298*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x14);
/*802FB49C 002F829C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802FB4A0 002F82A0*/ PPC::Runtime::ASM::bl(fn_PSVECNormalize);
/*802FB4A4 002F82A4*/ PPC::Runtime::ASM::b(.L_802FB4BC);
RUNTIME_PPC_JUMP_LABEL(.L_802FB4A8, 0x802FB4A8) //this is a jump label
/*802FB4A8 002F82A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802FB4AC 002F82AC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FB4B0 002F82B0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*802FB4B4 002F82B4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*802FB4B8 002F82B8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_802FB4BC, 0x802FB4BC) //this is a jump label
/*802FB4BC 002F82BC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802FB4C0 002F82C0*/ PPC::Runtime::ASM::lis(context->r3, 0x4330);
/*802FB4C4 002F82C4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5a, context->r31));
/*802FB4C8 002F82C8*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*802FB4CC 002F82CC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r4));
/*802FB4D0 002F82D0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*802FB4D4 002F82D4*/ PPC::Runtime::ASM::subf(context->r4, context->r5, context->r4);
/*802FB4D8 002F82D8*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E3B08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FB4DC 002F82DC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*802FB4E0 002F82E0*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E3B90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FB4E4 002F82E4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*802FB4E8 002F82E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*802FB4EC 002F82EC*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f3);
/*802FB4F0 002F82F0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*802FB4F4 002F82F4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*802FB4F8 002F82F8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*802FB4FC 002F82FC*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f0);
/*802FB500 002F8300*/ PPC::Runtime::ASM::bl(fn_tanf?);
/*802FB504 002F8304*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E3AD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FB508 002F8308*/ PPC::Runtime::ASM::frsp(context->f1, context->f1);
/*802FB50C 002F830C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3B98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FB510 002F8310*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*802FB514 002F8314*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3B9C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FB518 002F8318*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x34);
/*802FB51C 002F831C*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802FB520 002F8320*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*802FB524 002F8324*/ PPC::Runtime::ASM::addi(context->r6, context->r31, 0x40);
/*802FB528 002F8328*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802FB52C 002F832C*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0x8);
/*802FB530 002F8330*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802FB534 002F8334*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802FB538 002F8338*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802FB53C 002F833C*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802FB540 002F8340*/ PPC::Runtime::ASM::bl(fn_802FE674);
/*802FB544 002F8344*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802FB548 002F8348*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C4B00 @ Get_MemoryOffset_HighBit);
/*802FB54C 002F834C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802FB550 002F8350*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804C4B00 @ Get_MemoryOffset_LowBit);
/*802FB554 002F8354*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*802FB558 002F8358*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802FB55C 002F835C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*802FB560 002F8360*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802FB564 002F8364*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*802FB568 002F8368*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_802FB56C, 0x802FB56C) //this is a jump label
/*802FB56C 002F836C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*802FB570 002F8370*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*802FB574 002F8374*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802FB578 002F8378*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x90);
/*802FB57C 002F837C*/ PPC::Runtime::ASM::blr();
}