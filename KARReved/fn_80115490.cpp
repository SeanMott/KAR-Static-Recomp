//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80009908.hpp"



void fn_80115490(PPC::Runtime::GCContext* context)
{
/*80115490 00112290*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*80115494 00112294*/ PPC::Runtime::ASM::mflr(context->r0);
/*80115498 00112298*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8011549C 0011229C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801154A0 001122A0*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*801154A4 001122A4*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801154A8 001122A8*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*801154AC 001122AC*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801154B0 001122B0*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801154B4 001122B4*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801154B8 001122B8*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*801154BC 001122BC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801154C0 001122C0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801154C4 001122C4*/ PPC::Runtime::ASM::fmr(context->f28, context->f1);
/*801154C8 001122C8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801154CC 001122CC*/ PPC::Runtime::ASM::fmr(context->f29, context->f2);
/*801154D0 001122D0*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*801154D4 001122D4*/ PPC::Runtime::ASM::fmr(context->f30, context->f3);
/*801154D8 001122D8*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*801154DC 001122DC*/ PPC::Runtime::ASM::fmr(context->f31, context->f4);
/*801154E0 001122E0*/ PPC::Runtime::ASM::bl(fn_80009908);
/*801154E4 001122E4*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r30, 24);
/*801154E8 001122E8*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*801154EC 001122EC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*801154F0 001122F0*/ PPC::Runtime::ASM::beq(.L_801157F0);
/*801154F4 001122F4*/ PPC::Runtime::ASM::bge(.L_80115508);
/*801154F8 001122F8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*801154FC 001122FC*/ PPC::Runtime::ASM::beq(.L_80115514);
/*80115500 00112300*/ PPC::Runtime::ASM::bge(.L_80115578);
/*80115504 00112304*/ PPC::Runtime::ASM::b(.L_801157F0);
RUNTIME_PPC_JUMP_LABEL(.L_80115508, 0x80115508) //this is a jump label
/*80115508 00112308*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*8011550C 0011230C*/ PPC::Runtime::ASM::bge(.L_801157F0);
/*80115510 00112310*/ PPC::Runtime::ASM::b(.L_80115648);
RUNTIME_PPC_JUMP_LABEL(.L_80115514, 0x80115514) //this is a jump label
/*80115514 00112314*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80115518 00112318*/ PPC::Runtime::ASM::beq(.L_80115520);
/*8011551C 0011231C*/ PPC::Runtime::ASM::b(.L_801157F0);
RUNTIME_PPC_JUMP_LABEL(.L_80115520, 0x80115520) //this is a jump label
/*80115520 00112320*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80115524 00112324*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f28);
/*80115528 00112328*/ PPC::Runtime::ASM::bge(.L_80115534);
/*8011552C 0011232C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80115530 00112330*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_80115534, 0x80115534) //this is a jump label
/*80115534 00112334*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115538 00112338*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f29);
/*8011553C 0011233C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80115540 00112340*/ PPC::Runtime::ASM::ble(.L_8011554C);
/*80115544 00112344*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80115548 00112348*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_8011554C, 0x8011554C) //this is a jump label
/*8011554C 0011234C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80115550 00112350*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f30);
/*80115554 00112354*/ PPC::Runtime::ASM::bge(.L_80115560);
/*80115558 00112358*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8011555C 0011235C*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_80115560, 0x80115560) //this is a jump label
/*80115560 00112360*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115564 00112364*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f31);
/*80115568 00112368*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8011556C 0011236C*/ PPC::Runtime::ASM::ble(.L_801157F0);
/*80115570 00112370*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80115574 00112374*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_80115578, 0x80115578) //this is a jump label
/*80115578 00112378*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*8011557C 0011237C*/ PPC::Runtime::ASM::beq(.L_801155E8);
/*80115580 00112380*/ PPC::Runtime::ASM::bge(.L_801157F0);
/*80115584 00112384*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80115588 00112388*/ PPC::Runtime::ASM::bge(.L_80115590);
/*8011558C 0011238C*/ PPC::Runtime::ASM::b(.L_801157F0);
RUNTIME_PPC_JUMP_LABEL(.L_80115590, 0x80115590) //this is a jump label
/*80115590 00112390*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80115594 00112394*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f28);
/*80115598 00112398*/ PPC::Runtime::ASM::bge(.L_801155A4);
/*8011559C 0011239C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801155A0 001123A0*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_801155A4, 0x801155A4) //this is a jump label
/*801155A4 001123A4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801155A8 001123A8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f29);
/*801155AC 001123AC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801155B0 001123B0*/ PPC::Runtime::ASM::ble(.L_801155BC);
/*801155B4 001123B4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801155B8 001123B8*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_801155BC, 0x801155BC) //this is a jump label
/*801155BC 001123BC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801155C0 001123C0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f30);
/*801155C4 001123C4*/ PPC::Runtime::ASM::bge(.L_801155D0);
/*801155C8 001123C8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801155CC 001123CC*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_801155D0, 0x801155D0) //this is a jump label
/*801155D0 001123D0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801155D4 001123D4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f31);
/*801155D8 001123D8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801155DC 001123DC*/ PPC::Runtime::ASM::ble(.L_801157F0);
/*801155E0 001123E0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801155E4 001123E4*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_801155E8, 0x801155E8) //this is a jump label
/*801155E8 001123E8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801155EC 001123EC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*801155F0 001123F0*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f28);
/*801155F4 001123F4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801155F8 001123F8*/ PPC::Runtime::ASM::bge(.L_80115604);
/*801155FC 001123FC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80115600 00112400*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_80115604, 0x80115604) //this is a jump label
/*80115604 00112404*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115608 00112408*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f29);
/*8011560C 0011240C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80115610 00112410*/ PPC::Runtime::ASM::ble(.L_8011561C);
/*80115614 00112414*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80115618 00112418*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_8011561C, 0x8011561C) //this is a jump label
/*8011561C 0011241C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80115620 00112420*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f30);
/*80115624 00112424*/ PPC::Runtime::ASM::bge(.L_80115630);
/*80115628 00112428*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8011562C 0011242C*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_80115630, 0x80115630) //this is a jump label
/*80115630 00112430*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115634 00112434*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f31);
/*80115638 00112438*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8011563C 0011243C*/ PPC::Runtime::ASM::ble(.L_801157F0);
/*80115640 00112440*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80115644 00112444*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_80115648, 0x80115648) //this is a jump label
/*80115648 00112448*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*8011564C 0011244C*/ PPC::Runtime::ASM::beq(.L_80115728);
/*80115650 00112450*/ PPC::Runtime::ASM::bge(.L_80115664);
/*80115654 00112454*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80115658 00112458*/ PPC::Runtime::ASM::beq(.L_80115670);
/*8011565C 0011245C*/ PPC::Runtime::ASM::bge(.L_801156C8);
/*80115660 00112460*/ PPC::Runtime::ASM::b(.L_801157F0);
RUNTIME_PPC_JUMP_LABEL(.L_80115664, 0x80115664) //this is a jump label
/*80115664 00112464*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*80115668 00112468*/ PPC::Runtime::ASM::bge(.L_801157F0);
/*8011566C 0011246C*/ PPC::Runtime::ASM::b(.L_80115788);
RUNTIME_PPC_JUMP_LABEL(.L_80115670, 0x80115670) //this is a jump label
/*80115670 00112470*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80115674 00112474*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f28);
/*80115678 00112478*/ PPC::Runtime::ASM::bge(.L_80115684);
/*8011567C 0011247C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80115680 00112480*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_80115684, 0x80115684) //this is a jump label
/*80115684 00112484*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115688 00112488*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f29);
/*8011568C 0011248C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80115690 00112490*/ PPC::Runtime::ASM::ble(.L_8011569C);
/*80115694 00112494*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80115698 00112498*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_8011569C, 0x8011569C) //this is a jump label
/*8011569C 0011249C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801156A0 001124A0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f30);
/*801156A4 001124A4*/ PPC::Runtime::ASM::bge(.L_801156B0);
/*801156A8 001124A8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801156AC 001124AC*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_801156B0, 0x801156B0) //this is a jump label
/*801156B0 001124B0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801156B4 001124B4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f31);
/*801156B8 001124B8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801156BC 001124BC*/ PPC::Runtime::ASM::ble(.L_801157F0);
/*801156C0 001124C0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801156C4 001124C4*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_801156C8, 0x801156C8) //this is a jump label
/*801156C8 001124C8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801156CC 001124CC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*801156D0 001124D0*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f28);
/*801156D4 001124D4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801156D8 001124D8*/ PPC::Runtime::ASM::bge(.L_801156E4);
/*801156DC 001124DC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801156E0 001124E0*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_801156E4, 0x801156E4) //this is a jump label
/*801156E4 001124E4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801156E8 001124E8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f29);
/*801156EC 001124EC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801156F0 001124F0*/ PPC::Runtime::ASM::ble(.L_801156FC);
/*801156F4 001124F4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801156F8 001124F8*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_801156FC, 0x801156FC) //this is a jump label
/*801156FC 001124FC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80115700 00112500*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f30);
/*80115704 00112504*/ PPC::Runtime::ASM::bge(.L_80115710);
/*80115708 00112508*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8011570C 0011250C*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_80115710, 0x80115710) //this is a jump label
/*80115710 00112510*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115714 00112514*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f31);
/*80115718 00112518*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8011571C 0011251C*/ PPC::Runtime::ASM::ble(.L_801157F0);
/*80115720 00112520*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80115724 00112524*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_80115728, 0x80115728) //this is a jump label
/*80115728 00112528*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8011572C 0011252C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f28);
/*80115730 00112530*/ PPC::Runtime::ASM::bge(.L_8011573C);
/*80115734 00112534*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80115738 00112538*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_8011573C, 0x8011573C) //this is a jump label
/*8011573C 0011253C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115740 00112540*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f29);
/*80115744 00112544*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80115748 00112548*/ PPC::Runtime::ASM::ble(.L_80115754);
/*8011574C 0011254C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80115750 00112550*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_80115754, 0x80115754) //this is a jump label
/*80115754 00112554*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115758 00112558*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8011575C 0011255C*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f30);
/*80115760 00112560*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80115764 00112564*/ PPC::Runtime::ASM::bge(.L_80115770);
/*80115768 00112568*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8011576C 0011256C*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_80115770, 0x80115770) //this is a jump label
/*80115770 00112570*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115774 00112574*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f31);
/*80115778 00112578*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8011577C 0011257C*/ PPC::Runtime::ASM::ble(.L_801157F0);
/*80115780 00112580*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80115784 00112584*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_80115788, 0x80115788) //this is a jump label
/*80115788 00112588*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8011578C 0011258C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80115790 00112590*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f28);
/*80115794 00112594*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80115798 00112598*/ PPC::Runtime::ASM::bge(.L_801157A4);
/*8011579C 0011259C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801157A0 001125A0*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_801157A4, 0x801157A4) //this is a jump label
/*801157A4 001125A4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801157A8 001125A8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f29);
/*801157AC 001125AC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801157B0 001125B0*/ PPC::Runtime::ASM::ble(.L_801157BC);
/*801157B4 001125B4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801157B8 001125B8*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_801157BC, 0x801157BC) //this is a jump label
/*801157BC 001125BC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801157C0 001125C0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801157C4 001125C4*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f30);
/*801157C8 001125C8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801157CC 001125CC*/ PPC::Runtime::ASM::bge(.L_801157D8);
/*801157D0 001125D0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801157D4 001125D4*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_801157D8, 0x801157D8) //this is a jump label
/*801157D8 001125D8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801157DC 001125DC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f31);
/*801157E0 001125E0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801157E4 001125E4*/ PPC::Runtime::ASM::ble(.L_801157F0);
/*801157E8 001125E8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801157EC 001125EC*/ PPC::Runtime::ASM::b(.L_801157F4);
RUNTIME_PPC_JUMP_LABEL(.L_801157F0, 0x801157F0) //this is a jump label
/*801157F0 001125F0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801157F4, 0x801157F4) //this is a jump label
/*801157F4 001125F4*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*801157F8 001125F8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801157FC 001125FC*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*80115800 00112600*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80115804 00112604*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*80115808 00112608*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8011580C 0011260C*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*80115810 00112610*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80115814 00112614*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80115818 00112618*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8011581C 0011261C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80115820 00112620*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80115824 00112624*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*80115828 00112628*/ PPC::Runtime::ASM::blr();
}