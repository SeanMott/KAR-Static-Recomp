//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803373EC(PPC::Runtime::GCContext* context)
{
/*803373EC 003341EC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4288 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803373F0 003341F0*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f2);
/*803373F4 003341F4*/ PPC::Runtime::ASM::beq(.L_80337840);
/*803373F8 003341F8*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4310 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803373FC 003341FC*/ PPC::Runtime::ASM::fadd(context->f0, context->f1, context->f0);
/*80337400 00334200*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*80337404 00334204*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f2);
/*80337408 00334208*/ PPC::Runtime::ASM::bge(.L_80337628);
/*8033740C 0033420C*/ PPC::Runtime::ASM::fneg(context->f3, context->f0);
/*80337410 00334210*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4318 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337414 00334214*/ PPC::Runtime::ASM::b(.L_80337420);
RUNTIME_PPC_JUMP_LABEL(.L_80337418, 0x80337418) //this is a jump label
/*80337418 00334218*/ PPC::Runtime::ASM::fsub(context->f3, context->f3, context->f0);
/*8033741C 0033421C*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
RUNTIME_PPC_JUMP_LABEL(.L_80337420, 0x80337420) //this is a jump label
/*80337420 00334220*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80337424 00334224*/ PPC::Runtime::ASM::bgt(.L_80337418);
/*80337428 00334228*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4320 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033742C 0033422C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80337430 00334230*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80337434 00334234*/ PPC::Runtime::ASM::bne(.L_80337528);
/*80337438 00334238*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E4310 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033743C 0033423C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*80337440 00334240*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80337444 00334244*/ PPC::Runtime::ASM::bne(.L_803374B4);
/*80337448 00334248*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4348 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033744C 0033424C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80337450 00334250*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80337454 00334254*/ PPC::Runtime::ASM::bne(.L_80337484);
/*80337458 00334258*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*8033745C 0033425C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337460 00334260*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E432C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337464 00334264*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337468 00334268*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*8033746C 0033426C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E42A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337470 00334270*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*80337474 00334274*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*80337478 00334278*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8033747C 0033427C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80337480 00334280*/ PPC::Runtime::ASM::b(.L_80337620);
RUNTIME_PPC_JUMP_LABEL(.L_80337484, 0x80337484) //this is a jump label
/*80337484 00334284*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*80337488 00334288*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4340 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033748C 0033428C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E433C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337490 00334290*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4338 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337494 00334294*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*80337498 00334298*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033749C 0033429C*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*803374A0 003342A0*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*803374A4 003342A4*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*803374A8 003342A8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*803374AC 003342AC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*803374B0 003342B0*/ PPC::Runtime::ASM::b(.L_80337620);
RUNTIME_PPC_JUMP_LABEL(.L_803374B4, 0x803374B4) //this is a jump label
/*803374B4 003342B4*/ PPC::Runtime::ASM::fsub(context->f2, context->f0, context->f3);
/*803374B8 003342B8*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4348 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803374BC 003342BC*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*803374C0 003342C0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*803374C4 003342C4*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*803374C8 003342C8*/ PPC::Runtime::ASM::bne(.L_803374F8);
/*803374CC 003342CC*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*803374D0 003342D0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803374D4 003342D4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E432C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803374D8 003342D8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803374DC 003342DC*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*803374E0 003342E0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E42A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803374E4 003342E4*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*803374E8 003342E8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*803374EC 003342EC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*803374F0 003342F0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*803374F4 003342F4*/ PPC::Runtime::ASM::b(.L_80337620);
RUNTIME_PPC_JUMP_LABEL(.L_803374F8, 0x803374F8) //this is a jump label
/*803374F8 003342F8*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*803374FC 003342FC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4340 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337500 00334300*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E433C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337504 00334304*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4338 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337508 00334308*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*8033750C 0033430C*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337510 00334310*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*80337514 00334314*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*80337518 00334318*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*8033751C 0033431C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80337520 00334320*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*80337524 00334324*/ PPC::Runtime::ASM::b(.L_80337620);
RUNTIME_PPC_JUMP_LABEL(.L_80337528, 0x80337528) //this is a jump label
/*80337528 00334328*/ PPC::Runtime::ASM::fsub(context->f2, context->f3, context->f0);
/*8033752C 0033432C*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E4310 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337530 00334330*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*80337534 00334334*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*80337538 00334338*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8033753C 0033433C*/ PPC::Runtime::ASM::bne(.L_803375AC);
/*80337540 00334340*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4348 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337544 00334344*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80337548 00334348*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8033754C 0033434C*/ PPC::Runtime::ASM::bne(.L_8033757C);
/*80337550 00334350*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*80337554 00334354*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337558 00334358*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E432C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033755C 0033435C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337560 00334360*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*80337564 00334364*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E42A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337568 00334368*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*8033756C 0033436C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*80337570 00334370*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*80337574 00334374*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80337578 00334378*/ PPC::Runtime::ASM::b(.L_8033761C);
RUNTIME_PPC_JUMP_LABEL(.L_8033757C, 0x8033757C) //this is a jump label
/*8033757C 0033437C*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*80337580 00334380*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4340 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337584 00334384*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E433C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337588 00334388*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4338 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033758C 0033438C*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*80337590 00334390*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337594 00334394*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*80337598 00334398*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8033759C 0033439C*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*803375A0 003343A0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*803375A4 003343A4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*803375A8 003343A8*/ PPC::Runtime::ASM::b(.L_8033761C);
RUNTIME_PPC_JUMP_LABEL(.L_803375AC, 0x803375AC) //this is a jump label
/*803375AC 003343AC*/ PPC::Runtime::ASM::fsub(context->f2, context->f0, context->f3);
/*803375B0 003343B0*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4348 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803375B4 003343B4*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*803375B8 003343B8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*803375BC 003343BC*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*803375C0 003343C0*/ PPC::Runtime::ASM::bne(.L_803375F0);
/*803375C4 003343C4*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*803375C8 003343C8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803375CC 003343CC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E432C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803375D0 003343D0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803375D4 003343D4*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*803375D8 003343D8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E42A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803375DC 003343DC*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*803375E0 003343E0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*803375E4 003343E4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*803375E8 003343E8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*803375EC 003343EC*/ PPC::Runtime::ASM::b(.L_8033761C);
RUNTIME_PPC_JUMP_LABEL(.L_803375F0, 0x803375F0) //this is a jump label
/*803375F0 003343F0*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*803375F4 003343F4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4340 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803375F8 003343F8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E433C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803375FC 003343FC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4338 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337600 00334400*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*80337604 00334404*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337608 00334408*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8033760C 0033440C*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*80337610 00334410*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*80337614 00334414*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80337618 00334418*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_8033761C, 0x8033761C) //this is a jump label
/*8033761C 0033441C*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_80337620, 0x80337620) //this is a jump label
/*80337620 00334420*/ PPC::Runtime::ASM::fneg(context->f1, context->f0);
/*80337624 00334424*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80337628, 0x80337628) //this is a jump label
/*80337628 00334428*/ PPC::Runtime::ASM::fmr(context->f3, context->f0);
/*8033762C 0033442C*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4318 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337630 00334430*/ PPC::Runtime::ASM::b(.L_8033763C);
RUNTIME_PPC_JUMP_LABEL(.L_80337634, 0x80337634) //this is a jump label
/*80337634 00334434*/ PPC::Runtime::ASM::fsub(context->f3, context->f3, context->f0);
/*80337638 00334438*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
RUNTIME_PPC_JUMP_LABEL(.L_8033763C, 0x8033763C) //this is a jump label
/*8033763C 0033443C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80337640 00334440*/ PPC::Runtime::ASM::bgt(.L_80337634);
/*80337644 00334444*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4320 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337648 00334448*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8033764C 0033444C*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80337650 00334450*/ PPC::Runtime::ASM::bne(.L_80337744);
/*80337654 00334454*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E4310 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337658 00334458*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*8033765C 0033445C*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80337660 00334460*/ PPC::Runtime::ASM::bne(.L_803376D0);
/*80337664 00334464*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4348 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337668 00334468*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8033766C 0033446C*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80337670 00334470*/ PPC::Runtime::ASM::bne(.L_803376A0);
/*80337674 00334474*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*80337678 00334478*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033767C 0033447C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E432C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337680 00334480*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337684 00334484*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*80337688 00334488*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E42A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033768C 0033448C*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*80337690 00334490*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*80337694 00334494*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*80337698 00334498*/ PPC::Runtime::ASM::fmuls(context->f1, context->f3, context->f0);
/*8033769C 0033449C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803376A0, 0x803376A0) //this is a jump label
/*803376A0 003344A0*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*803376A4 003344A4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4340 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803376A8 003344A8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E433C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803376AC 003344AC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4338 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803376B0 003344B0*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*803376B4 003344B4*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803376B8 003344B8*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*803376BC 003344BC*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*803376C0 003344C0*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*803376C4 003344C4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*803376C8 003344C8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f4, context->f0);
/*803376CC 003344CC*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803376D0, 0x803376D0) //this is a jump label
/*803376D0 003344D0*/ PPC::Runtime::ASM::fsub(context->f2, context->f0, context->f3);
/*803376D4 003344D4*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4348 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803376D8 003344D8*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*803376DC 003344DC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*803376E0 003344E0*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*803376E4 003344E4*/ PPC::Runtime::ASM::bne(.L_80337714);
/*803376E8 003344E8*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*803376EC 003344EC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803376F0 003344F0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E432C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803376F4 003344F4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803376F8 003344F8*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*803376FC 003344FC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E42A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337700 00334500*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*80337704 00334504*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*80337708 00334508*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8033770C 0033450C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f3, context->f0);
/*80337710 00334510*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80337714, 0x80337714) //this is a jump label
/*80337714 00334514*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*80337718 00334518*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4340 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033771C 0033451C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E433C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337720 00334520*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4338 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337724 00334524*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*80337728 00334528*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033772C 0033452C*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*80337730 00334530*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*80337734 00334534*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*80337738 00334538*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8033773C 0033453C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f4, context->f0);
/*80337740 00334540*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80337744, 0x80337744) //this is a jump label
/*80337744 00334544*/ PPC::Runtime::ASM::fsub(context->f2, context->f3, context->f0);
/*80337748 00334548*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E4310 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033774C 0033454C*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*80337750 00334550*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*80337754 00334554*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80337758 00334558*/ PPC::Runtime::ASM::bne(.L_803377C8);
/*8033775C 0033455C*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4348 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337760 00334560*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80337764 00334564*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80337768 00334568*/ PPC::Runtime::ASM::bne(.L_80337798);
/*8033776C 0033456C*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*80337770 00334570*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337774 00334574*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E432C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337778 00334578*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033777C 0033457C*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*80337780 00334580*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E42A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337784 00334584*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*80337788 00334588*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*8033778C 0033458C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*80337790 00334590*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80337794 00334594*/ PPC::Runtime::ASM::b(.L_80337838);
RUNTIME_PPC_JUMP_LABEL(.L_80337798, 0x80337798) //this is a jump label
/*80337798 00334598*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*8033779C 0033459C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4340 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803377A0 003345A0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E433C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803377A4 003345A4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4338 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803377A8 003345A8*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*803377AC 003345AC*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803377B0 003345B0*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*803377B4 003345B4*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*803377B8 003345B8*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*803377BC 003345BC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*803377C0 003345C0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*803377C4 003345C4*/ PPC::Runtime::ASM::b(.L_80337838);
RUNTIME_PPC_JUMP_LABEL(.L_803377C8, 0x803377C8) //this is a jump label
/*803377C8 003345C8*/ PPC::Runtime::ASM::fsub(context->f2, context->f0, context->f3);
/*803377CC 003345CC*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4348 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803377D0 003345D0*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*803377D4 003345D4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*803377D8 003345D8*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*803377DC 003345DC*/ PPC::Runtime::ASM::bne(.L_8033780C);
/*803377E0 003345E0*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*803377E4 003345E4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803377E8 003345E8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E432C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803377EC 003345EC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803377F0 003345F0*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*803377F4 003345F4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E42A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803377F8 003345F8*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*803377FC 003345FC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*80337800 00334600*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*80337804 00334604*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80337808 00334608*/ PPC::Runtime::ASM::b(.L_80337838);
RUNTIME_PPC_JUMP_LABEL(.L_8033780C, 0x8033780C) //this is a jump label
/*8033780C 0033460C*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*80337810 00334610*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4340 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337814 00334614*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E433C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337818 00334618*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4338 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033781C 0033461C*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*80337820 00334620*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337824 00334624*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*80337828 00334628*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8033782C 0033462C*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*80337830 00334630*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80337834 00334634*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_80337838, 0x80337838) //this is a jump label
/*80337838 00334638*/ PPC::Runtime::ASM::fneg(context->f1, context->f0);
/*8033783C 0033463C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80337840, 0x80337840) //this is a jump label
/*80337840 00334640*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E42A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80337844 00334644*/ PPC::Runtime::ASM::blr();
}