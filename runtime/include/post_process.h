#pragma once

namespace MH3PostProcess {

void Init();
bool GetMh3uMode();
void SetMh3uMode(bool enabled, void* window = nullptr);
void ApplyToRenderer(void* window = nullptr);

} // namespace MH3PostProcess
