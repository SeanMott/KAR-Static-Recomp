//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80200D10.hpp"
#include "fn_8021D654.hpp"



void fn_8021D500(PPC::Runtime::GCContext* context)
{
/*8021D500 0021A300*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8021D504 0021A304*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021D508 0021A308*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021D50C 0021A30C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021D510 0021A310*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8021D514 0021A314*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8021D518 0021A318*/ PPC::Runtime::ASM::bl(fn_80200D10);
/*8021D51C 0021A31C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8021D520 0021A320*/ PPC::Runtime::ASM::beq(.L_8021D52C);
/*8021D524 0021A324*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8021D528 0021A328*/ PPC::Runtime::ASM::bl(fn_8021D654);
RUNTIME_PPC_JUMP_LABEL(.L_8021D52C, 0x8021D52C) //this is a jump label
/*8021D52C 0021A32C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb5c, context->r30));
/*8021D530 0021A330*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb60, context->r30));
/*8021D534 0021A334*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb68, context->r30));
/*8021D538 0021A338*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb6c, context->r30));
/*8021D53C 0021A33C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb64, context->r30));
/*8021D540 0021A340*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb70, context->r30));
/*8021D544 0021A344*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb74, context->r30));
/*8021D548 0021A348*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb78, context->r30));
/*8021D54C 0021A34C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb80, context->r30));
/*8021D550 0021A350*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb84, context->r30));
/*8021D554 0021A354*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb7c, context->r30));
/*8021D558 0021A358*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb88, context->r30));
/*8021D55C 0021A35C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r30));
/*8021D560 0021A360*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8021D564 0021A364*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8021D568 0021A368*/ PPC::Runtime::ASM::bne(.L_8021D57C);
/*8021D56C 0021A36C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7188 @ Get_MemoryOffset_SDA21);
/*8021D570 0021A370*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*8021D574 0021A374*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7190 @ Get_MemoryOffset_SDA21);
/*8021D578 0021A378*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8021D57C, 0x8021D57C) //this is a jump label
/*8021D57C 0021A37C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xb5c);
/*8021D580 0021A380*/ PPC::Runtime::ASM::bne(.L_8021D598);
/*8021D584 0021A384*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B42B0 @ Get_MemoryOffset_HighBit);
/*8021D588 0021A388*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7188 @ Get_MemoryOffset_SDA21);
/*8021D58C 0021A38C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804B42B0 @ Get_MemoryOffset_LowBit);
/*8021D590 0021A390*/ PPC::Runtime::ASM::li(context->r4, 0x3e5);
/*8021D594 0021A394*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8021D598, 0x8021D598) //this is a jump label
/*8021D598 0021A398*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8021D59C 0021A39C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*8021D5A0 0021A3A0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb5c, context->r30));
/*8021D5A4 0021A3A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb60, context->r30));
/*8021D5A8 0021A3A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*8021D5AC 0021A3AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb64, context->r30));
/*8021D5B0 0021A3B0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d8, context->r30));
/*8021D5B4 0021A3B4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb5c, context->r30));
/*8021D5B8 0021A3B8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8021D5BC 0021A3BC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb5c, context->r30));
/*8021D5C0 0021A3C0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb60, context->r30));
/*8021D5C4 0021A3C4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8021D5C8 0021A3C8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb60, context->r30));
/*8021D5CC 0021A3CC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb64, context->r30));
/*8021D5D0 0021A3D0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8021D5D4 0021A3D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb64, context->r30));
/*8021D5D8 0021A3D8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb5c, context->r30));
/*8021D5DC 0021A3DC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb68, context->r30));
/*8021D5E0 0021A3E0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8021D5E4 0021A3E4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb74, context->r30));
/*8021D5E8 0021A3E8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb60, context->r30));
/*8021D5EC 0021A3EC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb6c, context->r30));
/*8021D5F0 0021A3F0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8021D5F4 0021A3F4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb78, context->r30));
/*8021D5F8 0021A3F8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb64, context->r30));
/*8021D5FC 0021A3FC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb70, context->r30));
/*8021D600 0021A400*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8021D604 0021A404*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb7c, context->r30));
/*8021D608 0021A408*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb74, context->r30));
/*8021D60C 0021A40C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb80, context->r30));
/*8021D610 0021A410*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8021D614 0021A414*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8c, context->r30));
/*8021D618 0021A418*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb78, context->r30));
/*8021D61C 0021A41C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb84, context->r30));
/*8021D620 0021A420*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8021D624 0021A424*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb90, context->r30));
/*8021D628 0021A428*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb7c, context->r30));
/*8021D62C 0021A42C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb88, context->r30));
/*8021D630 0021A430*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8021D634 0021A434*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb94, context->r30));
/*8021D638 0021A438*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021D63C 0021A43C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8021D640 0021A440*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021D644 0021A444*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021D648 0021A448*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8021D64C 0021A44C*/ PPC::Runtime::ASM::blr();
}