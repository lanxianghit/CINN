#include "cinn/hlir/instruction/pass.h"

#include "cinn/hlir/instruction/module_group.h"

namespace cinn {
namespace hlir {
namespace instruction {

bool ModulePass::RunOnModuleGroup(ModuleGroup* module_group) {
  bool changed = false;
  for (auto* module : *module_group) {
    changed |= Run(module);
  }
  return changed;
}

}  // namespace instruction
}  // namespace hlir
}  // namespace cinn