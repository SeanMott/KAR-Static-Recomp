//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800CF4F0.hpp"
#include "fn_800CF3AC.hpp"
#include "fn_800CF44C.hpp"
#include "fn_8006BAC8.hpp"
#include "fn_8006B048.hpp"
#include "fn_80262FDC.hpp"
#include "fn_80262FDC.hpp"
#include "fn_80262FDC.hpp"
#include "fn_80262FDC.hpp"



void fn_8026B3A8(PPC::Runtime::GCContext* context)
{
/*8026B3A8 002681A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xa0, context->r1));
/*8026B3AC 002681AC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8026B3B0 002681B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*8026B3B4 002681B4*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*8026B3B8 002681B8*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*8026B3BC 002681BC*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8026B3C0 002681C0*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*8026B3C4 002681C4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x80);
/*8026B3C8 002681C8*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8026B3CC 002681CC*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8026B3D0 002681D0*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*8026B3D4 002681D4*/ PPC::Runtime::ASM::mr(context->r28, context->r5);
/*8026B3D8 002681D8*/ PPC::Runtime::ASM::bl(fn_800CF4F0);
/*8026B3DC 002681DC*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*8026B3E0 002681E0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8026B3E4 002681E4*/ PPC::Runtime::ASM::mr(context->r31, context->r0);
/*8026B3E8 002681E8*/ PPC::Runtime::ASM::bl(fn_800CF3AC);
/*8026B3EC 002681EC*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*8026B3F0 002681F0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8026B3F4 002681F4*/ PPC::Runtime::ASM::mr(context->r30, context->r0);
/*8026B3F8 002681F8*/ PPC::Runtime::ASM::bl(fn_800CF44C);
/*8026B3FC 002681FC*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*8026B400 00268200*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8026B404 00268204*/ PPC::Runtime::ASM::mr(context->r29, context->r0);
/*8026B408 00268208*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*8026B40C 0026820C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8026B410 00268210*/ PPC::Runtime::ASM::bl(fn_8006BAC8);
/*8026B414 00268214*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*8026B418 00268218*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026B41C 0026821C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8026B420 00268220*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x50);
/*8026B424 00268224*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f0);
/*8026B428 00268228*/ PPC::Runtime::ASM::bge(.L_8026B434);
/*8026B42C 0026822C*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
/*8026B430 00268230*/ PPC::Runtime::ASM::b(.L_8026B444);
RUNTIME_PPC_JUMP_LABEL(.L_8026B434, 0x8026B434) //this is a jump label
/*8026B434 00268234*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FCC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026B438 00268238*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f0);
/*8026B43C 0026823C*/ PPC::Runtime::ASM::ble(.L_8026B444);
/*8026B440 00268240*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_8026B444, 0x8026B444) //this is a jump label
/*8026B444 00268244*/ PPC::Runtime::ASM::bl(fn_8006B048);
/*8026B448 00268248*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x50);
/*8026B44C 0026824C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8026B450 00268250*/ PPC::Runtime::ASM::bl(fn_80262FDC);
/*8026B454 00268254*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026B458 00268258*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8026B45C 0026825C*/ PPC::Runtime::ASM::bge(.L_8026B468);
/*8026B460 00268260*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8026B464 00268264*/ PPC::Runtime::ASM::b(.L_8026B6A8);
RUNTIME_PPC_JUMP_LABEL(.L_8026B468, 0x8026B468) //this is a jump label
/*8026B468 00268268*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*8026B46C 0026826C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8026B470 00268270*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*8026B474 00268274*/ PPC::Runtime::ASM::bl(fn_splArcLengthPoint);
/*8026B478 00268278*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*8026B47C 0026827C*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8026B480 00268280*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*8026B484 00268284*/ PPC::Runtime::ASM::bl(fn_splArcLengthPoint);
/*8026B488 00268288*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8026B48C 0026828C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*8026B490 00268290*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8026B494 00268294*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8026B498 00268298*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8026B49C 0026829C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8026B4A0 002682A0*/ PPC::Runtime::ASM::fsubs(context->f4, context->f1, context->f0);
/*8026B4A4 002682A4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8026B4A8 002682A8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8026B4AC 002682AC*/ PPC::Runtime::ASM::fsubs(context->f2, context->f3, context->f2);
/*8026B4B0 002682B0*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8026B4B4 002682B4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8026B4B8 002682B8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8026B4BC 002682BC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8026B4C0 002682C0*/ PPC::Runtime::ASM::bl(fn_80262FDC);
/*8026B4C4 002682C4*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*8026B4C8 002682C8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026B4CC 002682CC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*8026B4D0 002682D0*/ PPC::Runtime::ASM::bge(.L_8026B4DC);
/*8026B4D4 002682D4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8026B4D8 002682D8*/ PPC::Runtime::ASM::b(.L_8026B6A8);
RUNTIME_PPC_JUMP_LABEL(.L_8026B4DC, 0x8026B4DC) //this is a jump label
/*8026B4DC 002682DC*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8026B4E0 002682E0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x44);
/*8026B4E4 002682E4*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8026B4E8 002682E8*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8026B4EC 002682EC*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8026B4F0 002682F0*/ PPC::Runtime::ASM::lfs(context->f7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8026B4F4 002682F4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f6, context->f5);
/*8026B4F8 002682F8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8026B4FC 002682FC*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8026B500 00268300*/ PPC::Runtime::ASM::fmuls(context->f1, context->f7, context->f3);
/*8026B504 00268304*/ PPC::Runtime::ASM::fmsubs(context->f0, context->f7, context->f2, context->f0);
/*8026B508 00268308*/ PPC::Runtime::ASM::fmuls(context->f2, context->f4, context->f2);
/*8026B50C 0026830C*/ PPC::Runtime::ASM::fmsubs(context->f1, context->f4, context->f5, context->f1);
/*8026B510 00268310*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8026B514 00268314*/ PPC::Runtime::ASM::fmsubs(context->f0, context->f6, context->f3, context->f2);
/*8026B518 00268318*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8026B51C 0026831C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8026B520 00268320*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8026B524 00268324*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8026B528 00268328*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8026B52C 0026832C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8026B530 00268330*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8026B534 00268334*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8026B538 00268338*/ PPC::Runtime::ASM::bl(fn_80262FDC);
/*8026B53C 0026833C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026B540 00268340*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8026B544 00268344*/ PPC::Runtime::ASM::bge(.L_8026B550);
/*8026B548 00268348*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8026B54C 0026834C*/ PPC::Runtime::ASM::b(.L_8026B6A8);
RUNTIME_PPC_JUMP_LABEL(.L_8026B550, 0x8026B550) //this is a jump label
/*8026B550 00268350*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8026B554 00268354*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x50);
/*8026B558 00268358*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8026B55C 0026835C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8026B560 00268360*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8026B564 00268364*/ PPC::Runtime::ASM::lfs(context->f7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8026B568 00268368*/ PPC::Runtime::ASM::fmuls(context->f0, context->f6, context->f5);
/*8026B56C 0026836C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8026B570 00268370*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8026B574 00268374*/ PPC::Runtime::ASM::fmuls(context->f1, context->f7, context->f3);
/*8026B578 00268378*/ PPC::Runtime::ASM::fmsubs(context->f0, context->f7, context->f2, context->f0);
/*8026B57C 0026837C*/ PPC::Runtime::ASM::fmuls(context->f2, context->f4, context->f2);
/*8026B580 00268380*/ PPC::Runtime::ASM::fmsubs(context->f1, context->f4, context->f5, context->f1);
/*8026B584 00268384*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8026B588 00268388*/ PPC::Runtime::ASM::fmsubs(context->f0, context->f6, context->f3, context->f2);
/*8026B58C 0026838C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8026B590 00268390*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8026B594 00268394*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8026B598 00268398*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8026B59C 0026839C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8026B5A0 002683A0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8026B5A4 002683A4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8026B5A8 002683A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8026B5AC 002683AC*/ PPC::Runtime::ASM::bl(fn_80262FDC);
/*8026B5B0 002683B0*/ PPC::Runtime::ASM::lfs(context->f7, STRUCT_FLOAT_COUNT_1805E2FC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026B5B4 002683B4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f7);
/*8026B5B8 002683B8*/ PPC::Runtime::ASM::bge(.L_8026B5C4);
/*8026B5BC 002683BC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8026B5C0 002683C0*/ PPC::Runtime::ASM::b(.L_8026B6A8);
RUNTIME_PPC_JUMP_LABEL(.L_8026B5C4, 0x8026B5C4) //this is a jump label
/*8026B5C4 002683C4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*8026B5C8 002683C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8026B5CC 002683CC*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8026B5D0 002683D0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8026B5D4 002683D4*/ PPC::Runtime::ASM::fsubs(context->f9, context->f1, context->f0);
/*8026B5D8 002683D8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8026B5DC 002683DC*/ PPC::Runtime::ASM::fsubs(context->f8, context->f4, context->f3);
/*8026B5E0 002683E0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8026B5E4 002683E4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8026B5E8 002683E8*/ PPC::Runtime::ASM::fmuls(context->f3, context->f9, context->f2);
/*8026B5EC 002683EC*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8026B5F0 002683F0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f9, context->f1);
/*8026B5F4 002683F4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8026B5F8 002683F8*/ PPC::Runtime::ASM::fmadds(context->f5, context->f8, context->f4, context->f3);
/*8026B5FC 002683FC*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*8026B600 00268400*/ PPC::Runtime::ASM::fmuls(context->f0, context->f9, context->f0);
/*8026B604 00268404*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8026B608 00268408*/ PPC::Runtime::ASM::fmadds(context->f3, context->f8, context->f2, context->f1);
/*8026B60C 0026840C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8026B610 00268410*/ PPC::Runtime::ASM::fsubs(context->f6, context->f6, context->f4);
/*8026B614 00268414*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8026B618 00268418*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8026B61C 0026841C*/ PPC::Runtime::ASM::fmadds(context->f0, context->f8, context->f1, context->f0);
/*8026B620 00268420*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8026B624 00268424*/ PPC::Runtime::ASM::fmadds(context->f5, context->f6, context->f2, context->f5);
/*8026B628 00268428*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E30DC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026B62C 0026842C*/ PPC::Runtime::ASM::fmadds(context->f3, context->f6, context->f4, context->f3);
/*8026B630 00268430*/ PPC::Runtime::ASM::fmadds(context->f4, context->f6, context->f1, context->f0);
/*8026B634 00268434*/ PPC::Runtime::ASM::fcmpo(cr0, context->f5, context->f2);
/*8026B638 00268438*/ PPC::Runtime::ASM::blt(.L_8026B64C);
/*8026B63C 0026843C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3004 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026B640 00268440*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f31);
/*8026B644 00268444*/ PPC::Runtime::ASM::fcmpo(cr0, context->f5, context->f0);
/*8026B648 00268448*/ PPC::Runtime::ASM::ble(.L_8026B654);
RUNTIME_PPC_JUMP_LABEL(.L_8026B64C, 0x8026B64C) //this is a jump label
/*8026B64C 0026844C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8026B650 00268450*/ PPC::Runtime::ASM::b(.L_8026B6A8);
RUNTIME_PPC_JUMP_LABEL(.L_8026B654, 0x8026B654) //this is a jump label
/*8026B654 00268454*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f2);
/*8026B658 00268458*/ PPC::Runtime::ASM::blt(.L_8026B664);
/*8026B65C 0026845C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*8026B660 00268460*/ PPC::Runtime::ASM::ble(.L_8026B66C);
RUNTIME_PPC_JUMP_LABEL(.L_8026B664, 0x8026B664) //this is a jump label
/*8026B664 00268464*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8026B668 00268468*/ PPC::Runtime::ASM::b(.L_8026B6A8);
RUNTIME_PPC_JUMP_LABEL(.L_8026B66C, 0x8026B66C) //this is a jump label
/*8026B66C 0026846C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f7);
/*8026B670 00268470*/ PPC::Runtime::ASM::bge(.L_8026B680);
/*8026B674 00268474*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026B678 00268478*/ PPC::Runtime::ASM::fcmpo(cr0, context->f4, context->f0);
/*8026B67C 0026847C*/ PPC::Runtime::ASM::blt(.L_8026B698);
RUNTIME_PPC_JUMP_LABEL(.L_8026B680, 0x8026B680) //this is a jump label
/*8026B680 00268480*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E30E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026B684 00268484*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f0);
/*8026B688 00268488*/ PPC::Runtime::ASM::ble(.L_8026B6A0);
/*8026B68C 0026848C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FCC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026B690 00268490*/ PPC::Runtime::ASM::fcmpo(cr0, context->f4, context->f0);
/*8026B694 00268494*/ PPC::Runtime::ASM::ble(.L_8026B6A0);
RUNTIME_PPC_JUMP_LABEL(.L_8026B698, 0x8026B698) //this is a jump label
/*8026B698 00268498*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8026B69C 0026849C*/ PPC::Runtime::ASM::b(.L_8026B6A8);
RUNTIME_PPC_JUMP_LABEL(.L_8026B6A0, 0x8026B6A0) //this is a jump label
/*8026B6A0 002684A0*/ PPC::Runtime::ASM::stfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8026B6A4 002684A4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8026B6A8, 0x8026B6A8) //this is a jump label
/*8026B6A8 002684A8*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*8026B6AC 002684AC*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*8026B6B0 002684B0*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*8026B6B4 002684B4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x80);
/*8026B6B8 002684B8*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8026B6BC 002684BC*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8026B6C0 002684C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*8026B6C4 002684C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8026B6C8 002684C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xa0);
/*8026B6CC 002684CC*/ PPC::Runtime::ASM::blr();
}